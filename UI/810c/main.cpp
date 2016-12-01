#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include<fstream>
#include <qdir.h>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


   //Start test

    QString path = QDir::currentPath();
    string st=path.toStdString();
    cout<<st<<endl;
    const wstring allwords1=L"青光闪动，一柄青钢剑倏地刺出，指向在年汉子左肩，使剑少年不等招用老，腕抖剑斜，剑锋已削向那汉子右颈。那中年汉子剑挡格，铮的一声响，双剑相击，嗡嗡作声，震声未绝，双剑剑光霍霍，已拆了三<n>招，中年汉子长剑猛地击落，直砍少年顶门。那少年避向右侧，左手剑诀一引，青钢剑疾刺那汉子大腿。<n><stylechange>两人剑法迅捷，全力相搏。<n><stylechange>练武厅东坐着二人。上首是个四十左右的中年道姑，铁青着脸，嘴唇紧闭。下首是个五十余岁的老者，右手捻着长须，神情甚是得意。两人的座位相距一丈有余，身后各站着二十余名男女弟子。西边一排椅子上<n>坐着十余位宾客。东西双方的目光都集注于场中二人的角斗。<n><stylechange>眼见那少年与中年汉子已拆到七十余招，剑招越来越紧，兀自未分胜败。突然中年汉子一剑挥出，用力猛了，身子微微一幌，似欲摔跌。西边宾客中一个身穿青衫的年轻男子忍不住“嗤”的一声笑。他随即知道失态，忙伸手按住了口。<stylechange>便在这时，场中少年左手呼一掌拍出，击向那汉子后心，那汉子向前跨出一步避开，手中长剑蓦地圈转，喝一声：“着！”那少年左腿已然中剑，腿下一个踉跄，长剑在地下一撑，站直身子待欲再斗，那中年汉<n>子已还剑入鞘，笑道：“褚师弟，承让、承让，伤得不厉害么？”那少年脸色苍白，咬着嘴唇道：“多谢龚师兄剑下留情。”<n><stylechange>那长须老者满脸得色，微微一笑，说道：“东宗已胜了三阵，看来这‘剑湖宫’又要让东宗再住五年了。辛师妹，咱们还须比下去么？”坐在他上首的那中年道姑强忍怒气，说道：“左师果然调教得好徒儿。但<n>不知左师兄对‘无量玉壁’的钻研，这五年来可已大有心得么？”长须老者向她瞪了一眼，正色道：“师妹怎地忘了本派的规矩？”那道姑哼了一声，便不再说下去了。<n><stylechange>这老者姓左，名叫子穆，是“无量剑”东宗的掌门。那道姑姓辛，道号双清，是“无量剑”西宗掌门。<n><stylechange>“无量剑”原分东、北、西三宗，北宗近数十年来已趋式微，东西二宗却均人才鼎盛。“无量剑”于五代后唐年间在南诏无量山创派，掌门人居住无量山剑湖宫。自于大宋仁过年间分为三宗之后，每隔五年，三<n>宗门下弟子便在剑湖宫中比武斗剑，获胜的一宗得在剑湖宫居住五年，至第六年上重行比试。五场斗剑，赢得三场者为胜。这五年之中，败者固然极力钻研，以图在下届剑会中洗雪前耻，胜者也是丝毫不敢松懈。北<n>宗于四十年前获胜而入住剑湖宫，五年后败阵出宫，掌门人一怒而率领门人迁往山西，此后即不再参预比剑，与东西两宗也不通音问。三十五年来，东西二宗互有胜负。东宗胜过四次，西宗胜过两次。那龚姓中年汉<n>子与褚姓少年相斗，已是本次比剑中的第四场，姓龚的汉子既胜，东宗四赛三胜，第五场便不用比了。<n><stylechange>西首锦凳上所坐的则是别派人士，其中有的是东西二宗掌门人共同出面邀请的公证人，其余则是前来观礼的嘉宾。这些人都是云南武林中的知名之士。只坐在最下首的那个青衣少年却是个无名之辈，偏是他在龚<n>姓汉子伴作失足时嗤的一声笑。这少年乃随滇南普洱老武师马五德而来。马五德是大茶商，豪富好客，颇有孟尝之风，江湖上落魄的武师前去投奔，他必竭诚相待，因此人缘甚佳，武功却是平平。左子穆听马五德引<n>见之时说这少年姓段，段姓是大理国的国姓，大理境内姓段的成千成万，左子穆当时听了也不以为意，心想分多半是马五德的弟子，这马老儿自身的功夫稀松平常，调教出来的弟子还高得到那里去，是以连“久<n>仰”两字也懒得说，只拱了拱手，便肃入宾座。不料这年轻人不知天高地厚，竟当左子穆的得意弟子佯出虚招诱敌之时，失笑讥讽。<n><stylechange>当下左子穆笑道：“辛师妹今年派出的四名弟子，剑术上的造诣着实可观，尤其这第四场我们赢得更是侥幸。褚师侄年纪轻轻，居然练到了这般地步，前途当真不可限量，五年之后，只怕咱们东西宗得换换位<n>了，呵呵，呵呵！”说着大笑不已，突然眼光一转，瞧向那姓段青年，说道：“我那劣徒适才以虚招‘跌扑步’获胜，这位段世兄似乎颇不以为然。便请段世兄下场指点小徒一二如何？马五哥威震滇南，强将手下无<n>弱兵，段世兄的手段定是挺高的。”<n><stylechange>马五德脸上微微一红，忙道：“这位段兄弟不是我的弟子。你老哥哥这几手三脚猫的把式，怎配做人家师父？左贤弟可别当面取笑。这位段兄弟来到普洱舍下，听说我正要到无量山来，便跟着同来，说道无量山<n>山水清幽，要来赏玩风景。”<n><stylechange>左子穆心想：“他若是你弟子，碍着你的面子，我也不能做得太绝了，既是寻常宾客，那可不能客气了。有人竟敢在剑湖宫中讥笑‘无量剑’东宗的武功，若不教他闹个灰头土脸下的山，姓左的颜面何存？”当<n>下冷笑一声，说道：“请教段兄大号如何称呼，是那一位高人的门下？”<n><stylechange>那姓段青年微笑道：“在下单名一誉字，从来没学过什么武艺。我看到别人摔交，不论他真摔还是假摔，忍不住总是要笑的。”左子穆听他言语中全无恭敬之意，不禁心中有气，道：“那有什么好笑？”段誉轻<n>摇手中摺扇，轻描淡写的道：“一个人站着坐着，没什么好笑，躺在床上，也不好笑，要是躺地下，哈哈，那就可笑得紧了。除非他是个三岁娃娃，那又作别论。”左子穆听他说话越来越狂妄，不禁气塞胸臆，向马<n>五德道：“马五哥，这位段兄是你的好朋友么？”<n><stylechange>马五德和段誉也是初交，完全不知对方底细，他生性随和，段誉要同来无量山，他不便拒却，便带着来了，此时听左穆的口气甚是着恼，势必出手便极厉害，大好一个青年，何必让他吃个大亏？便道：“段兄弟<n>和我虽无深交，咱们总是结伴来的。我瞧段兄弟斯斯文文的，未必会什么武功，适才这一笑定是出于无意。这样吧，老哥哥肚子也饿了，左贤弟赶快整治酒席，咱们贺你三杯。今日大好日子，左贤弟何必跟年轻晚辈<n>计较？”<n><stylechange>左子穆道：“段兄既然不是马五哥的好朋友，那么兄弟如有得罪，也不算是扫了马五哥的金面。光杰，刚才人家笑你呢，你下场请教请教吧。”<n><stylechange>那中年汉子龚光杰巴不得师父有这句话，当下抽出长剑，往场中一站，倒转剑柄，拱手向段誉道：“段朋友，请！”段誉道：“很好，你练罢，我瞧着。”仍是坐在椅中，并不起身。龚光杰登时脸皮紫胀，怒<n>道：“你……你说什么？”段誉道：“你手里拿了一把剑这么东晃来西去，想是要练剑，那么你就练罢。我向来不爱瞧人家动刀使剑，可是既来之，则安之，那也不防瞧着。”龚光杰喝道：“我师父叫你这小子也下<n>场来，咱们比划比划。”<n><stylechange>段誉轻挥折扇，摇了摇头，说道：“你师父是你的师父，你师父可不是我的师父。你师父差得动你，你师父可差不动我。你师父叫你跟人家比剑，你已经跟人家比过了。你师父叫我跟你比剑，我一来不会，二来<n>怕输，三来怕痛，四来怕死，因此是不比的。我说不比，就是不比。”<n><stylechange>他这番说什么“你师父”“我师父”的，说得犹如拗口令一般，练武厅中许多人听着，忍不住笑了出来。“无量剑”西宗双清门下男女各占其半，好几名女弟子格格娇笑。练武厅上庄严肃穆的气象，霎时间一扫<n>无遗。<n><stylechange>龚光杰大踏步过来，伸剑指向段誉胸口，喝道：“你到底是真的不会，还是装傻？”段誉见剑尖离胸不过数寸，只须轻轻一送，便刺入了心脏，脸上却丝毫不露惊慌之色，说道：“我自然是真的不会，装傻有什<n>么好装？”龚光杰道：“你到无量山剑湖宫中来撒野，想必是活得不耐烦了。你是何人门下？受谁的指使？若不直说，莫怪大爷剑下无情。”<n><stylechange>";
    string allfont="languageChinesecolorredfonttimessize28bold0italic0underline1end<stylechange>languageChinesecolorgreenfonttimessize44bold0italic1underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorredfonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold1italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecoloryellowfonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>languageChinesecolorbluefonttimessize28bold0italic0underline0end<stylechange>";

    Text test1;
    test1.getText(allwords1,allfont);
    list<Content> test2=test1.contentList();
    list<Content>::iterator kid;
    Content c;
    for(kid=test2.begin();kid!=test2.end();kid++){
        c=*kid;
        wstring test3=c.getword();
        wcout<<test3<<endl;
    }

   //End test

    Frame f(40,20,600,600,1);
    f.text(test1);
    w.addFrame(f);
    w.show();
#if 0
    //zqx's test are as follow
    wifstream in("testfile1.txt");
    wstring words;
    try {
        in.is_open();
    }
    catch(int) {
        cout<<"Opening file error!"<<endl;
    }
    const int LINE_LENGTH = 200;
    wchar_t str[LINE_LENGTH];
    in.getline(str,LINE_LENGTH);
    cout<<str<<endl;
#endif
    return a.exec();
}
