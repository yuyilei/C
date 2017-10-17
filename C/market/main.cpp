#include<cstdio>
#include<vector>
#include<iostream>
#include <fstream>
using namespace std ;

const int LIST_INIT_SIZE=100 ;
const int LISTINCREMENT=10 ;


typedef struct
{
    char name[25] , id[5];
    float price, cost ;
    int num ;
} goods ;


typedef struct
{
    int trans_num, computer_num, cashier_num,  customer_id, pay_way  ;
    float  pay , all ;
    char date[10] ;
    vector<int> gid ;
} recipet ;


typedef struct
{
     recipet *elem ;
     int length , listsize , incrementsize ;
     char date[10] ;
     int all ;
} r_list ;


typedef struct
{
    int id, point ;
    char num[10] ;
} customer ;


typedef struct
{
    vector<goods> all_goods ;
    int sum ;
} market ;


typedef struct
{
    int *elem , length , listsize , incrementsize ;
} LIST ;

typedef struct
{
    char name[25] ;
    int xiaoliang ;
} shangyue ;


struct St
{
    int id , age ;
    char name[10] ;
    struct St * next ;
    St(int x , int y) : id(x), age(y) , next(NULL) {}
} ;

int  welcome() ;
void to_clear() ;
void init(vector<goods> &all) ;
void show_goods(vector<goods> &all) ;
void initrecipet(r_list &L , int size, int increase ) ;
void insertrecipet(r_list &L ,int index , recipet e ) ;
void createrecipet(r_list &res) ;
void showrecipet(r_list &res) ;
void diandan(r_list &res, vector<goods>&all_goods) ;
void show_one_day(r_list &res, vector<goods>&all_goods) ;
void show_one_day(r_list &res1, vector<goods>&all_goods) ;
void PriorElem(LIST L, int cur_e , int &pre_e) ;
int LocateElem(LIST L, int e) ;
void GetElem(LIST L ,int i , int &e ) ;
void show_one_good(vector<goods>&all_goods,int pos ) ;
void show_all_goods(vector<goods> &all_goods ) ;
void init_shangeyue(vector<shangyue> &shang ) ;
void DeRlist(r_list &res) ;
void form_one_day(r_list &res, vector<goods>&all_goods)  ;
void get_goods(vector<goods> &all_goods ) ;
void print_xiaopiao(r_list &res ) ; 
void print_xiaopiao_log(r_list &res ) ; 



vector<goods> all_goods ;
r_list res ;
vector<shangyue> shang ;

int main()
{
    init(all_goods) ;
    int r = welcome() ;
   // r_list res ;
    while ( true )
    {
        if ( r == 0 )
        {
            break ;
        }
        switch (r)
        {
            case 2 : show_goods(all_goods) ; break ;
        }
        break ;
    }
    init_shangeyue(shang ) ;
    initrecipet(res,100,10) ;
    createrecipet(res) ;
    showrecipet(res) ;
    diandan(res,all_goods) ;
    show_one_day(res,all_goods) ;
    form_one_day(res,all_goods)  ;
    show_all_goods(all_goods) ;
    print_xiaopiao(res ) ; 
    print_xiaopiao_log(res ) ; 
    get_goods(all_goods ) ;
    show_goods(all_goods) ;
    DeRlist(res) ;

    return 0 ;
}

void to_clear()
{
        system("clear");
        cout << "欢迎下次再来!"  ;
        cout << endl ;
}

int  welcome()
{
    system("clear") ;
    cout << "                                            " ;
    cout << endl ;
    cout << "                                                ******************" ;
    cout << endl ;
    cout << "                                                **欢迎来到五芳斋**" ;
    cout << endl ;
    cout << "                                                ******************" ;
    cout << endl ;
    cout << endl ;
    cout << "    “五芳斋”创始于1921年，是国家首批“中华老字号”，经过几代人的不懈努力，五芳斋已经发展成为集食品、农业、房产、金融和贸易" ;
    cout << endl ;
    cout << "业务为一体的企业集团，造就了一个民族品牌的百年传奇。"  ;
    cout << endl ;
    cout << "    浙江嘉兴五芳斋粽子是获国家质检总局国家地理标志（原产地）注册的产品，“五芳斋”商标是国家商标局认定的中国驰名商标。五芳斋" ;
    cout << endl ;
    cout << "在传承民族饮食文化的基础上不断创新，对明清两代极具盛名的“嘉湖细点”的制作工艺进行了现代化改造，现已形成以粽子为主导，集传统" ;
    cout << endl ;
    cout << "糕点、卤味制品、米制品、肉食品、蛋制品、酒、调味品等为一体的系列产品群。 五芳斋号称'江南粽子大王'，以糯而不烂，肥而不腻，肉" ;
    cout << endl ;
    cout << "嫩味美、咸甜适中而著称。" ;
    cout << endl ;
    cout << endl ;
    cout << "                                                                     按r查看菜单 按s点菜 按q退出程序" ;
    cout << endl ;
    char tmp ;

    while ( tmp != 'q' && tmp != 's' && tmp != 'r' )
    {
        cin >> tmp ;
        switch (tmp)
        {
            case 'q' : to_clear() ;
            case 's' : return 1 ;
            case 'r' : return 2 ;
            default :
                cout << endl ;
                cout << "输入错误！请重新输入\n按r查看菜单 按s点菜 按q退出程序" ;
                cout << endl ; break ;
        }
    }
}

// 初始化商品
void init(vector<goods> &all)
 {
    ifstream data ;
    data.open("data0.txt");
    int i , n  ;
    data >> n ;

    for ( i = 0 ; i < n ; i++ )
     {
        goods tmp ;
        data >> tmp.id >> tmp.name >> tmp.price >> tmp.num >> tmp.cost ;
        all.push_back(tmp) ;
    }
}


// 上月销量
void init_shangeyue( vector<shangyue> &shang)
{
    ifstream data ;
    data.open("data2.txt") ;
    int n ;
    data >> n ;
    int i ;

    for ( i = 0 ; i < n ; i++ )
    {
        shangyue tmp ;
        data >> tmp.name ;
        data >> tmp.xiaoliang ;
        shang.push_back(tmp) ;
    }
}


// 展示商品
void show_goods(vector<goods> &all)
 {
  //  system("clear") ;
    cout << endl ;
    cout << "                           菜单" << endl ;
    cout << "菜名                 价格           余量            编号 " ;
    cout << endl ;

    for ( int i = 0 ; i < all.size() ; i++ )
    {
        printf("%-25s %4.1f           %3d             %-5s \n",all[i].name,all[i].price,all[i].num,all[i].id ) ;
    }
    cout << "按b返回首页" ;
    cout << endl ;
    char tmp ;
    while ( true )
    {
        cin >> tmp ;
        if ( tmp == 'b' )
         {
            welcome() ;
            return ;
        }
        cout << "输入错误，按b返回首页" ;
        cout << endl ;
    }
}

// 初始化小票列表
void initrecipet(r_list &L , int size=LIST_INIT_SIZE, int increase=LISTINCREMENT)
{
    L.elem = new recipet [size] ;
    //  初始化指针
    L.length = 0 ;
    L.listsize = size ;
    L.incrementsize = increase ;
}


// 在小票列表中加入小票
void insertrecipet(r_list &L ,int index , recipet e )
{
    if ( index == 1 )
    {
        L.elem[index-1] = e ;
        L.length = 1 ;
        return ;
    }

    for (int i = L.length - 2 ; i > index - 1 ; i-- )
    {
        L.elem[i+1] = L.elem[i] ;
    }
    L.elem[index-1] = e ;
    L.length += 1 ;
}

// 点菜，
// 只是初始化了小票列表
void createrecipet(r_list &res)
{
    ifstream data ;
    data.open("data1.txt");
    int i , num ;
    data >> num ;
    data >> res.date ;
    res.all = 0 ;

    for ( i = 0 ; i < num ; i++ )
    {
        recipet tmp ;
        data >> tmp.trans_num >> tmp.computer_num >> tmp.cashier_num ;
        data >> tmp.pay_way >> tmp.pay >> tmp.all  ;
        data >> tmp.date ;
        res.all += tmp.all ;
        int m , k ;
        data >> m ;
        vector<int> temp ;

        for ( int j = 0 ; j < m ; j++ )
        {
            data >> k ;
            temp.push_back(k) ;
        }
        tmp.gid = temp ;
        temp.clear() ;
        insertrecipet(res,i+1,tmp) ;
    }
}


// 初始化列表
void InitList(LIST &L , int size=LIST_INIT_SIZE, int increase=LISTINCREMENT) {
    L.elem = new int [size] ;
    //  初始化指针
    L.length = 0 ;
    L.listsize = size ;
    L.incrementsize = increase ;
}


// 展示菜单
void showrecipet(r_list &res)
{
  //  system("clear") ;
    cout << endl ;
    int len = res.length ;
    int i ;
    cout << "                             客人点单" << endl ;
    cout << endl ;
    cout << "交易号    " ;
    cout << "交易机号      " ;
    cout << "日期        " ;
    cout << "支付方式      " ;
    cout << "应付金额      " ;
    cout << "实付金额      " ;
    cout << "找零      " ;
    cout << "消费菜品     " ;
    cout << endl ;

    for ( i = 0 ; i < len ; i++ )
    {
        printf(" %03d         %d        %s",res.elem[i].trans_num,res.elem[i].computer_num,res.elem[i].date) ;
        switch (res.elem[i].pay_way ) {
            case 0 :  printf("       微信      ") ;
                       break ;
            case 1 :  printf("       支付宝    ") ;
                       break ;
            case 2 :  printf("       现金      ") ;
                       break ;
        }

     //  printf("       %-10s  ",(res.elem[i].pay_way)?"支付宝":"微信") ;
     //   printf("  %s %2.2f",(res.elem[i].pay_way)?"  ":" ", res.elem[i].pay) ;
        printf("    %03.2f",res.elem[i].pay) ;
        float ca = res.elem[i].all - res.elem[i].pay ;
        printf("          %03.2f",res.elem[i].all) ;
        printf("       %03.2f   ",ca) ;

        for ( int j = 0 ; j <  res.elem[i].gid.size() ; j++ )
        {
            if ( j != 0 )
                cout <<"\n                                                                                      " ;
            int tmp = res.elem[i].gid[j] ;
            cout << "   " << j+1 << "." << all_goods[tmp].name ;
        }
        cout << "\n" << endl ;
    }
    cout << endl ;
}


// 查找后继
void NextElem(LIST L, int cur_e , int &next_e)
{
    for ( int i = 0 ; i < L.length - 1 ; i++ )
    {
        if ( L.elem[i] == cur_e )
        {
            next_e = L.elem[i+1] ;
            return  ;
        }
    }
}


// 插入元素
void InsertElem(LIST &L ,int index , int e )
{
    if ( index == 1 )
    {
        L.elem[index-1] = e ;
        L.length = 1 ;
        return ;
    }

    for (int i = L.length - 2 ; i > index - 1 ; i-- )
    {
        L.elem[i+1] = L.elem[i] ;
    }
    L.elem[index-1] = e ;
    L.length += 1 ;
}

// 删除元素
void DeleteElem(LIST &L ,int index , int &e )
{
    e = L.elem[index-1] ;

    for ( int i = index - 1 ; i < L.length - 1 ; i++ )
    {
        L.elem[i] = L.elem[i+1] ;
    }
    L.length -= 1 ;
}

// 依次输出每个元素的值
void ListTraverse(LIST L)
{
    for ( int i = 0 ; i < L.length ; i++ )
    {
        cout << L.elem[i] << " " ;
    }
    cout << endl ;
}

// 这个函数用来根据点单数，
//减少货物的量
void diandan(r_list &res, vector<goods>&all_goods)
{
    int i ;
    for ( i = 0 ; i < res.length ; i++ )
    {
        int j ;
        for ( j = 0 ; j < res.elem[i].gid.size() ; j++ )
        {
            all_goods[res.elem[i].gid[j]].num -- ;
        }

    }
}


// 这个函数用来显示一天卖出多少
void show_one_day(r_list &res, vector<goods>&all_goods)
{
   // system("clear") ;
    cout << endl ;
    cout << "                                         " ;
    cout << res.date ;
    cout << "收入总计" ;
    cout << endl ;
    cout << endl ;
    vector<int> g ;

    for ( int i = 0 ; i < all_goods.size() ; i++ )
    {
        g.push_back(0) ;
    }
    int weixin = 0 , allw = 0 ;
    int zhifubao = 0 , allz = 0 ;
    int diannei = 0 , alld = 0 ;
    int dianall = 0 ;
    int shou = 0 , zhuan = 0 ;
    int i ;

    for ( i = 0 ; i < res.length ; i++ )
    {
        int pay_way = res.elem[i].pay_way ;
        int pay = res.elem[i].pay ;
        int all = res.elem[i].all ;
        if ( pay_way == 0 )
        {
            weixin++ ;
            allw += pay ;
            shou += pay ;
            zhuan += pay ;
        }
        else if ( pay_way == 1 )
        {
            zhifubao ++ ;
            allz += pay ;
            shou += pay ;
            zhuan += pay ;
        }
        else if ( pay_way == 2 )
        {
            diannei ++ ;
            alld += pay ;
            shou += pay ;
            dianall += all ;
            zhuan += all ;
        }
        int j ;
        int nums = res.elem[i].gid.size() ;

        for ( j = 0 ; j < nums ; j++ )
        {
            int ss = res.elem[i].gid[j] ;
            g[ss]++ ;
        }
    }
    cout << "共计支付" << weixin + zhifubao + diannei << "次，详细情况如下："  ;
    cout << endl ;
    cout << "微信支付:                     " << weixin << "次" << endl ;
    cout << "支付宝支付:                   " << zhifubao << "次" << endl ;
    cout << "店内支付（店内消费）:         " << diannei << "次" << endl ;
    cout << endl ;
    cout << "支付方式                                      收入                                           盈利"  ;
    cout << endl ;
    cout << "微信                                          " ;
    cout <<  allw ;
    cout << "                                             " ;
    cout << allw ;
    cout << endl ;
    cout << "支付宝                                        " ;
    cout << allz ;
    cout << "                                             " ;
    cout << allz ;
    cout << endl ;
    cout << "店内收入                                      " ;
    cout << dianall ;
    cout << "                                             " ;
    cout << alld ;
    cout << "\n" << endl ;
    cout << "共计线上支付（微信和支付宝）支付" << allw+allz <<  "元, " << "线下支付" << dianall  << "元。" << endl ;
    cout << "共计线上盈利（微信和支付宝）盈利" << allw+allz <<  "元, " << "线下盈利" << alld << "元。" << endl ;
    cout << res.date << "一共支付" << allw+allz+dianall << "元。 " << "收入" << allw+allz+alld << "元。" << endl ;
    cout << endl ;
    cout << "各个菜品销量如下：" ;
    cout << endl ;
    cout << "菜品                          销量                                收入"   ;
    cout << endl ;
    int q ;
    int numss = 12 ;

    for ( q = 0 ; q < numss ; q++ )
    {
        goods tmpg = all_goods[q] ;
        cout << tmpg.name ;
        cout << "                    " ;
        cout << g[q] ;
        cout << "                                   " ;
        cout << g[q]*tmpg.price ;
        cout << endl ;
    }
    cout << endl ;
    cout << endl ;
    int maxy = 0 , iy = 0 ;
    int y = 0 ;

    for ( y = 0 ; y < 6 ; y++ )
    {
        if ( g[y] > maxy )
        {
            maxy = g[y] ;
            iy = y ;
        }
    }
    int maxz = 0 , iz = 6 ;
    int z = 6 ;

    for ( z = 6 ; z < 12 ; z++ )
    {
        if ( g[z] > maxz )
        {
            maxz = g[z] ;
            iz = z ;
        }
    }

    cout << endl ;
    cout << "其中，小吃中" << all_goods[iy].name << "的销量最高为" << maxy << endl ;
    cout << "其中，主食中" << all_goods[iz].name << "的销量最高为" << maxz << endl ;
    cout << "建议：" << endl ;
    cout << "明天多做一些" << all_goods[iy].name << "和" << all_goods[iz].name << endl ;
    cout << endl ;

    int miny = 100 ;
    iy = 0 ;
    y = 0 ;

    for ( y = 0 ; y < 6 ; y++ )
    {
        if ( g[y] <= miny )
        {
            miny = g[y] ;
            iy = y ;
        }
    }
    int minz = 100 ;
    iz = 6 ;
    z = 6 ;

    for ( z = 6 ; z < 12 ; z++ )
    {
        if ( g[z] <= minz )
        {
            minz = g[z] ;
            iz = z ;
        }
    }

    cout << endl ;
    cout << "其中，小吃中" << all_goods[iy].name << "的销量最低，为" << miny << endl ;
    cout << "其中，主食中" << all_goods[iz].name << "的销量最低，为" << minz << endl ;
    cout << "建议：" << endl ;
    cout << "明天少做一些" << all_goods[iy].name << "和" << all_goods[iz].name << endl ;
    cout << endl ;

}


// 销毁线性表
void DestroyList(LIST &L)
{
    delete [] L.elem ;
    L.length = 0 ;
    L.listsize = 0 ;
}

// 销毁小票列表
void DeRlist(r_list &res)
{
    delete [] res.elem ;
    // 销毁列表
   //  res.date = NULL ;
    res.length = 0 ;
    res.listsize = 0 ;
    res.incrementsize = 0 ;
    // 参数重新设置为0
}


// 判断线性表是否为空
bool ListEmpty(LIST L)
{
    if ( L.length == 0 )
        return false ;
    return true ;
}

// 计算线性表的长度
int ListLength(LIST L)
{
    return L.length ;
}

// 显示你想看的产品
void show_one_good(vector<goods>&all_goods,int pos )
{
    if ( pos < 0 || pos >= all_goods.size() )
    {
        cout << "输入不合理！" << endl ;
        return ;
    }
    goods t = all_goods[pos] ;
    cout << endl ;
    cout << t.name << "属于" ;
    if ( t.id[0] == 'Y' )
        cout << "小吃" ;
    if ( t.id[0] == 'Z' )
        cout << "主食"  ;
    cout << "，上月销量" ;
    cout << shang[pos].xiaoliang << "（碗／个）" ;
    cout << endl ;
    cout << endl ;
}

// 获取某个元素（通过下标）
void GetElem(LIST L ,int i , int &e )
 {
    e = L.elem[i] ;
}



// 一直查看菜品
void show_all_goods(vector<goods> &all_goods )
{
   //  system("clear") ;
    int i = 0 ;
    cout << "选择相应的数字查看菜品！" << endl ;
    for ( i = 0 ; i < all_goods.size() ; i++ )
    {
        goods t = all_goods[i] ;
        cout << "查看" << t.name << "轻按" << i+1 ;
        cout << endl ;
    }
    char tmp ;
    cout << "按q退出查看,查看请按k" << endl ;
    cin >> tmp ;
    while ( tmp != 'q' )
    {
        if ( tmp != 'k' )
        {
            cout << "输入不合理！" << endl ;
            cout << "按q退出查看,查看请按k" << endl ;
            cout << "请重新输入" << endl ;
            cin >> tmp ;
            continue ;
        }
        int temp ;
        cin >> temp ;
        int r = temp - 1 ;
        system("clear") ;
        show_one_good(all_goods,r) ;
        cout << "请继续输入：" ;
        cout << endl ;
        cout << "按q退出查看,查看请按k" << endl ;
        cout << endl ;
        for ( i = 0 ; i < all_goods.size() ; i++ )
        {
            goods t = all_goods[i] ;
            cout << "查看" << t.name << "轻按" << i+1 ;
            cout << endl ;
        }
        cout << endl ;
        cin >> tmp ;
    }
    if  ( tmp == 'q' )
    {
        welcome() ;
    }
    else
    {
        return ;
    }
}

// 查找元素
int LocateElem(LIST L, int e)
{
    for ( int i = 0 ; i < L.length ; i++ )
        if ( L.elem[i] == e )
            return i ;
    return 0 ;
}

// 查找前驱
void PriorElem(LIST L, int cur_e , int &pre_e)
{
    for ( int i = 1 ; i < L.length ; i++ )
    {
        if ( L.elem[i] == cur_e )
        {
            pre_e = L.elem[i-1] ;
            return ;
        }
    }
}

// 重置为空表
void ClearList(LIST &L)
{
    DestroyList(L) ;
    InitList(L) ;
}



// 这个函数用来将一天的销量记录到文件中
void form_one_day(r_list &res, vector<goods>&all_goods)
{
   // system("clear") ;
    ofstream cou ;
    cou.open(res.date) ;
    cou << endl ;
    cou << "                                         " ;
    cou << res.date ;
    cou << "收入总计" ;
    cou << endl ;
    cou << endl ;
    vector<int> g ;

    for ( int i = 0 ; i < all_goods.size() ; i++ )
    {
        g.push_back(0) ;
    }

    int weixin = 0 , allw = 0 ;
    int zhifubao = 0 , allz = 0 ;
    int diannei = 0 , alld = 0 ;
    int dianall = 0 ;
    int shou = 0 , zhuan = 0 ;
    int i ;

    for ( i = 0 ; i < res.length ; i++ )
    {
        int pay_way = res.elem[i].pay_way ;
        int pay = res.elem[i].pay ;
        int all = res.elem[i].all ;

        if ( pay_way == 0 )
        {
            weixin++ ;
            allw += pay ;
            shou += pay ;
            zhuan += pay ;
        }
        else if ( pay_way == 1 )
        {
            zhifubao ++ ;
            allz += pay ;
            shou += pay ;
            zhuan += pay ;
        }
        else if ( pay_way == 2 )
        {
            diannei ++ ;
            alld += pay ;
            shou += pay ;
            dianall += all ;
            zhuan += all ;
        }
        int j ;
        int nums = res.elem[i].gid.size() ;

        for ( j = 0 ; j < nums ; j++ )
        {
            int ss = res.elem[i].gid[j] ;
            g[ss]++ ;
        }
    }

    cou << "共计支付" << weixin + zhifubao + diannei << "次，详细情况如下："  ;
    cou << endl ;
    cou << "微信支付:                     " << weixin << "次" << endl ;
    cou << "支付宝支付:                   " << zhifubao << "次" << endl ;
    cou << "店内支付（店内消费）:         " << diannei << "次" << endl ;
    cou << endl ;
    cou << "支付方式                                      收入                                           盈利"  ;
    cou << endl ;
    cou << "微信                                          " ;
    cou <<  allw ;
    cou << "                                             " ;
    cou << allw ;
    cou << endl ;
    cou << "支付宝                                        " ;
    cou << allz ;
    cou << "                                             " ;
    cou << allz ;
    cou << endl ;
    cou << "店内收入                                      " ;
    cou << dianall ;
    cou << "                                             " ;
    cou << alld ;
    cou << "\n" << endl ;
    cou << "共计线上支付（微信和支付宝）支付" << allw+allz <<  "元, " << "线下支付" << dianall  << "元。" << endl ;
    cou << "共计线上盈利（微信和支付宝）盈利" << allw+allz <<  "元, " << "线下盈利" << alld << "元。" << endl ;
    cou << res.date << "一共支付" << allw+allz+dianall << "元。 " << "收入" << allw+allz+alld << "元。" << endl ;
    cou << endl ;
    cou << "各个菜品销量如下：" ;
    cou << endl ;
    cou << "菜品                          销量                                收入"   ;
    cou << endl ;
    int q ;
    int numss = 12 ;

    for ( q = 0 ; q < numss ; q++ )
    {
        goods tmpg = all_goods[q] ;
        cou << tmpg.name ;
        cou << "                    " ;
        cou << g[q] ;
        cou << "                                   " ;
        cou << g[q]*tmpg.price ;
        cou << endl ;
    }

    cou << endl ;
    cou << endl ;
    cou << endl ;
    cout << "剩余菜品:" << endl ;
    cou << "                           菜单" << endl ;
    cou << "菜名                 价格           余量            编号 " ;
    cou << endl ;

    for ( int i = 0 ; i < all_goods.size() ; i++ )
    {
        cou << all_goods[i].name ;
        cou << "            " ;
        cou << all_goods[i].price ;
        cou << "             " ;
        cou << all_goods[i].num ;
        cou << "            " ;
        cou << all_goods[i].id  << endl ;
    }

    int maxy = 0 , iy = 0 ;
    int y = 0 ;

    for ( y = 0 ; y < 6 ; y++ )
    {
        if ( g[y] > maxy )
        {
            maxy = g[y] ;
            iy = y ;
        }
    }

    int maxz = 0 , iz = 6 ;
    int z = 6 ;
    for ( z = 6 ; z < 12 ; z++ )
    {
        if ( g[z] > maxz )
        {
            maxz = g[z] ;
            iz = z ;
        }
    }

    cou << endl ;
    cou << "其中，小吃中" << all_goods[iy].name << "的销量最高为" << maxy << endl ;
    cou << "其中，主食中" << all_goods[iz].name << "的销量最高为" << maxz << endl ;
    cou << "建议：" << endl ;
    cou << "明天多做一些" << all_goods[iy].name << "和" << all_goods[iz].name << endl ;
    cou << endl ;

    int miny = 100 ;
    iy = 0 ;
    y = 0 ;

    for ( y = 0 ; y < 6 ; y++ )
    {
        if ( g[y] <= miny )
        {
            miny = g[y] ;
            iy = y ;
        }
    }
    int minz = 100 ;
    iz = 6 ;
    z = 6 ;
    for ( z = 6 ; z < 12 ; z++ )
    {
        if ( g[z] <= minz )
        {
            minz = g[z] ;
            iz = z ;
        }
    }

    cou << endl ;
    cou << "其中，小吃中" << all_goods[iy].name << "的销量最低，为" << miny << endl ;
    cou << "其中，主食中" << all_goods[iz].name << "的销量最低，为" << minz << endl ;
    cou << "建议：" << endl ;
    cou << "明天少做一些" << all_goods[iy].name << "和" << all_goods[iz].name << endl ;
    cou << endl ;


}



// 进货
void get_goods(vector<goods> &all_goods )
{
    int i ;
    int num = all_goods.size() ;
    for ( i = 0 ; i < num ; i++ )
    {
        all_goods[i].num = 10 ;
    }
}


void print_xiaopiao_log(r_list &res ) 
{
    ofstream cou ;
    cou.open("小票1") ;
    int nums = res.length ; 
    int i ; 

    cou << endl ; 
    cou << endl ; 
    cou << res.date << "小票列表:" << endl ; 
    cou << endl ; 
    cou << "交易号    " ;
    cou << "交易机号      " ;
    cou << "日期        " ;
    cou << "支付方式      " ;
    cou << "应付金额      " ;
    cou << "实付金额      " ;
    cou << "找零      " ;
    cou << "消费菜品         " ;
    cou << "外卖员         " ; 
    cou << endl ;

    for ( i = 0 ; i <= nums ; i++ )
    {
        cou << res.elem[i].trans_num << "         " ; 
        cou << res.elem[i].computer_num << "            " ; 
        cou << res.elem[i].date  ;

        switch (res.elem[i].pay_way ) {
            case 0 :  cou << "       微信      " ;
                       break ;
            case 1 :  cou << "       支付宝    " ;
                       break ;
            case 2 :  cou << "       现金      " ;
                       break ;
        }

     //  printf("       %-10s  ",(res.elem[i].pay_way)?"支付宝":"微信") ;
     //   printf("  %s %2.2f",(res.elem[i].pay_way)?"  ":" ", res.elem[i].pay) ;
        cou << "    " << res.elem[i].pay ;
        float ca = res.elem[i].all - res.elem[i].pay ;
        cou << "              " << res.elem[i].all ;
        cou << "       "<< ca <<"     " ;

        for ( int j = 0 ; j <  res.elem[i].gid.size() ; j++ )
        {
            /*
            if ( j == 0 ) 
            {
                if ( res.elem[i].pay_way == 0 || res.elem[i].pay_way == 1 ) 
                {
                    cout << "          " ; 
                    cout << i % 3 ; 
                }
            }
            */ 
            if ( j != 0 )
                cou <<"\n                                                                                      " ;
            int tmp = res.elem[i].gid[j] ;
            cou << "   " << j+1 << "." << all_goods[tmp].name ;
            if ( j == 0 ) 
            {
                if ( res.elem[i].pay_way == 0 || res.elem[i].pay_way == 1 ) 
                {
                    cou << "        " ; 
                    cou << (i % 3) + 1 ; 
                }
                else 
                {
                    cou << "       无（店内消费）" ; 
                }
            }
        }
        cou << "\n" << endl ;
    }
    cou << endl ;    
}


void print_xiaopiao(r_list &res ) 
{
  //  system("clear") ;
    cout << endl ;
    int len = res.length ;
    int i ;

    cout << "                             客人点单" << endl ;
    cout << endl ;
    cout << "交易号    " ;
    cout << "交易机号      " ;
    cout << "日期        " ;
    cout << "支付方式      " ;
    cout << "应付金额      " ;
    cout << "实付金额      " ;
    cout << "找零      " ;
    cout << "消费菜品     " ;
    cout << "外卖员    " ; 
    cout << endl ;

    for ( i = 0 ; i < len ; i++ )
    {
        printf(" %03d         %d        %s",res.elem[i].trans_num,res.elem[i].computer_num,res.elem[i].date) ;
        switch (res.elem[i].pay_way ) {
            case 0 :  printf("       微信      ") ;
                       break ;
            case 1 :  printf("       支付宝    ") ;
                       break ;
            case 2 :  printf("       现金      ") ;
                       break ;
        }

     //  printf("       %-10s  ",(res.elem[i].pay_way)?"支付宝":"微信") ;
     //   printf("  %s %2.2f",(res.elem[i].pay_way)?"  ":" ", res.elem[i].pay) ;

        printf("    %03.2f",res.elem[i].pay) ;
        float ca = res.elem[i].all - res.elem[i].pay ;
        printf("          %03.2f",res.elem[i].all) ;
        printf("       %03.2f   ",ca) ;

        for ( int j = 0 ; j <  res.elem[i].gid.size() ; j++ )
        {
            if ( j != 0 )
                cout <<"\n                                                                                      " ;
            int tmp = res.elem[i].gid[j] ;
            cout << "   " << j+1 << "." << all_goods[tmp].name ;
            if ( j == 0 ) 
            {
                if ( res.elem[i].pay_way == 0 || res.elem[i].pay_way == 1 ) 
                {
                    cout << "        " ; 
                    cout << (i % 3) + 1 ; 
                }
                else 
                {
                    cout << "       无（店内消费）" ; 
                }
            }
        }
            cout << "\n" << endl ;
    }
    cout << endl ;
}



