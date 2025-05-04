#include <stdio.h>
#include <stdlib.h>

int main() {
    int name;

    printf("Enter the song number you want (kyuki switch-case mein ints hi kar skte, string input ke liye alag header file or syntax chahiye)\n");
    printf("1. Farebi (ChaarDiwaari)\n2. 11K (SeedheMaut)\n3. Lukka Chuppi\nYour Choice: ");
    scanf("%d", &name);

    FILE *lessPipe = popen("less", "w");
    if (!lessPipe) {
        perror("popen failed");
        return 1;
    }

    switch (name) {
        case 2:
            fprintf(lessPipe, "[Intro: Calm]\n"
           "Bhai, kuch din pehle\n"
           "Mere ek dost ne mere se pucha\n"
           "\"Bhai, thodi zaroorat hai\n"
           "Gyara hazaar rupay pade hai aap pe?\"\n"
           "Maine kaha \"Bhai, bilkul pade hai\"\n"
           "Pata hai, chhe saal pehle mereko\n"
           "Gyaara hazaar kamane ke liye\n"
           "Gyaara din kaam krna padta bhai\n"
           "Hamne bhi sola bar ke liye peti uthayi hai\n"
           "Isko likhna aur Record krne me\n"
           "Paach ghante se zyada nahi laga hoga bhai\n"
           "Gyaara din chhod, un paanch ghanto me, har pandra Minute me\n"
           "Pachaas hazaar se zyada kama rahe they ham dono\n"
           "Haan bhai, hain tere bhai pe gyaara hazaar\n"
           "[Verse 2: Encore ABJ]\n"
           "Isse ache se aata hai krna Offend\n"
           "Mujhe ache se aata hai bharna ghusaand\n"
           "Teri (Huh) saath wali zyada pasand\n"
           "Inke zabaa se zyada ye lund hai buland\n"
           "Teri zabaa se zyada, ye kaali surang\n"
           "Tujhe jaana to jaa\n"
           "I've been one with the pen\n"
           "Waise ghar waali Music hai\n"
           "Baahar wali Business hai\n"
           "Ek deri khushi aur ek deri\n"
           "Bahut saara ETH aur bahut saare Rupees hai\n"
           "Aur moti moti Jeb\n"
           "T pe bade bade Louis hai\n"
           "I hold shit down on the map poora khud hi\n"
           "In halwo ki shakalein waha pe ab sooji\n"
           "\n"
           "[Bridge: Encore ABJ]\n"
           "Kavi kehna chahte hai ki jab kavi ne\n"
           "Aapke pitaji ke paise ka kabhi Khaya hi nhi hai toh\n"
           "\n"
           "[Verse 3: Encore ABJ]\n"
           "To bola tu kaisa kala kiski kaisi?\n"
           "Bana khud ko pehle, bana khud ke paise gawa\n"
           "Khud ke jaise bada, khud ke paise sambhal\n"
           "Apne lehze bana apni leh be\n"
           "Aur chal apni leh pe, na chal kiska seh ke\n"
           "Achal hun main waise\n"
           "Par apno pe aaye to\n"
           "Rapte pe, rapte pe\n"
           "Rapte pe, rapte pe\n"
           "Main sikha hu sadko se\n"
           "Apno ke jhagdo se\n"
           "Kal se aur parso se\n"
           "Haato se fisal ke behte huye lamho se\n"
           "Laundo ke khaam-a-khaa bandi ke jhagdo se\n"
           "Phir unhi bandi ke paanch sau aur nakhro se\n"
           "Mummy ki fikar se\n"
           "Papa ke nashe se (Aanh!)\n"
           "Sikha gareebi se\n"
           "Sikha tawajjo se\n"
           "Sikha ki apno ko rakhne ka dil me aur\n"
           "Dill se Jo utare woh lawdo pe bajo pe ahh\n"
           "\n"
           "[Verse 4: Calm & Encore ABJ]\n"
           "Ham jaisa kabhi bhi banega naah\n"
           "In fuddu se laundo ko bharu bhi na\n"
           "Catalogue aisa ki maru bhi na\n"
           "Dete jaara jote aur wo jalate gaye\n"
           "Main banata gaya\n"
           "Reh gaya thoda maal jeb me flight thi\n"
           "ABJ wo bhi daba diya kahi\n"
           "Saala dara bhi na\n"
           "Beta zara bhi nhi\n"
           "Aur ye fuddu launde\n"
           "Aise kare Rap nhi\n"
           "Humse darta ye booth\n"
           "Darega nhi kaise hu bharta jab Booth\n"
           "Hai ganda ye roop hai janta saboot\n"
           "Ab in Rapper'on ko khane me kantaal hai\n"
           "Dude par ye kaam hai\n"
           "Laundo dono bhare-bhusi\n"
           "Aise meri maa bhi puchi\n"
           "Kaha se aa raha paisa beta?\"\n"
           "Wo bhi pareshaan hai\n"
           "To bhi ghoomun sadko me\n"
           "Galiyon me Chain bahar chalu\n"
           "Slow tez yaha pe chale mera naam hai \"Sir\"\n"
           "\n"
           "[Outro: Calm]\n"
           "Aur ye rap-wap se hat ke bata raha hu bhai tumhe\n"
           "Jebe jaise badi hoti rehti hai\n"
           "Dil chote ho jate hai logon ke\n"
           "Aur bahuto ke dil unke jeb se bhi chote hai\n"
           "To mehnat se paise banao, paise se waqt banao\n"
           "Waqt apne chahne waalo ke saath bitao\n"
           "Pehle khud upar jao\n"
           "Fir dusro ko liye raah banao\n"
           "Bas aage badte jao\n"
           "Dhanyawaad\n"); 
            break;
            

        case 1:
            fprintf(lessPipe, "Okay, ready?\n"
           "[Boots and cats and boots and cats and boots and cats and boots and cats and boots and cats and boots and cats and]\n"
           "\n"
           "Downtown mein lagi aag\n"
           "Sabhi bhaage (Bhaage, bhaage, bhaage)\n"
           "Building se nikale dhuan\n"
           "Abe sab jal gaya\n"
           "Toh sabhi bhaage (Bhaage, bhaage, bhaage)\n"
           "Public mein mache hahakaar\n"
           "Mujrim pharaar\n"
           "Gaya woh kahaa pe, najaane?\n"
           "Hai piche-piche police mere\n"
           "Jaldi-jaldi bhaagta main aage\n"
           "Basta bachaa ke (Haan)\n"
           "Uh, jisme chori ka maal\n"
           "Kisi ka dil rakha\n"
           "\n"
           "Khichta hai\n"
           "Mujhe tujh tak\n"
           "Jaane kaun pharishta\n"
           "Aa gaya main\n"
           "Tere ghar par\n"
           "Dar par, dar tha\n"
           "Bhatakata\n"
           "Mil gayi hai\n"
           "Teri bhuri-bhuri dono aakhein\n"
           "Aakhon se meri\n"
           "Ho gaya woh\n"
           "Mujhe jiska dar tha\n"
           "[Chorus: Chaar Diwaari]\n"
           "Laila ko lagata hoon\n"
           "Main farebi\n"
           "Haan, farebi\n"
           "Kya kahegi?\n"
           "Ye\n"
           "Kya meri saari baate hai\n"
           "Farebi\n"
           "Main farebi\n"
           "Jaan legi ye\n"
           "Laila ka lagata hoon main farebi\n"
           "Haan farebi\n"
           "Kya kahegi?\n"
           "Ye\n"
           "Kya meri saari baate hai farebi\n"
           "Main farebi, jaan legi ye\n"
           "\n"
           "[Interlude: Chaar Diwaari]\n"
           "Dhan dhan dhan\n"
           "Dhadan dhan dhan dhan\n"
           "Dhadan dhan dhan dhan dhan\n"
           "Dhan dhadan dhadan dhadan\n"
           "\n"
           "Dhan dhan dhan\n"
           "Dhadan dhan dhan dhan\n"
           "Dhadan dhan dhan dhan dhan\n"
           "Dhan dhadan dhadan dhadan\n"
           "Laila, jaana\n"
           "Bhaaga main kab se ghar se\n"
           "Sab se main kahu\n"
           "Dhan dhan (aye) dhan\n"
           "Dhadan dhan dhan (aye) dhan\n"
           "Dhadan dhan dhan (aye) dhan dhan\n"
           "Dhan dhadan dhadan dhadan\n"
           "\n"
           "Downtain mein lagi aag\n"
           "\n"
           "[Verse 2: Raftaar]\n"
           "Diwaari mera dil le gaya\n"
           "Apna khanjar maara\n"
           "Seena mera chheel ke gaya (meow)\n"
           "Meri keel waali heel le gaya\n"
           "Mujhe lagaa lagi aag\n"
           "Saala feel le gaya (ah)\n"
           "Meri gali mein\n"
           "Aata jaata rehta tha tu\n"
           "Tapri mein ghusa chhupa\n"
           "Chhatri mein rehta\n"
           "Phaike khat kare bak\n"
           "Mujhe Katrina kehta tha\n"
           "Main fuck bhi na deti thi\n"
           "Tu zakhmi sa baitha tha na\n"
           "Dallé\n"
           "\n"
           "[Bridge: Raftaar, Chaar Diwaari]\n"
           "Kheechta hai\n"
           "Nazron se faade husn ka pardaa\n"
           "Aa ke neeche\n"
           "Ghar ke tu dar par\n"
           "Sar tha pataktaa\n"
           "Dilagi hai\n"
           "Ya dil ki lagi hai\n"
           "Phat-ti hai meri\n"
           "Ho gaya woh\n"
           "Mujhe jiska dar tha\n"
           "\n"
           "[Chorus: Chaar Diwaari]\n"
           "Laila ko lagata hoon\n"
           "Main farebi\n"
           "Haan, farebi\n"
           "Kya kahegi?\n"
           "Ye\n"
           "(Kya meri saari baate) hai\n"
           "Farebi\n"
           "Main farebi\n"
           "Jaan legi ye\n"
           "Laila ka lagata hoon main farebi\n"
           "Haan farebi\n"
           "Kya kahegi?\n"
           "Ye\n"
           "Kya meri saari baate hai farebi\n"
           "Main farebi, jaan legi ye\n"
           "\n"
           "[Verse 3: Chaar Diwaari]\n"
           "Laila tu na maane\n"
           "Laila na pehchaane\n"
           "Laila ko baatein sab\n"
           "Kyu lagein bahaane\n"
           "\n"
           "Laila main farebi\n"
           "Main thag main apraadhi\n"
           "Maine toh zindagi ye\n"
           "Bhaag bhaag bitaa di\n"
           "\n"
           "Laila main na tera\n"
           "Tu hai na meri\n"
           "Mujhe bhula dena\n"
           "Main kahin ka nahi\n"
           "\n"
           "Laila tu abhi hai\n"
           "Phir teri saheli\n"
           "Main thagtaa jagg ko\n"
           "Mera koi hai apna hi nahi\n"
           "\n"
           "Main chahta nahi hu tujhe\n"
           "Meri toh mujh se bhi na bane\n"
           "Main kha gaya teri khushiyaan\n"
           "Ab tujhe lage\n"
           "\n"
           "[Chorus: Chaar Diwaari, Raftaar]\n"
           "Laila ko lagtaa hu main\n"
           "(Bhadwa sala randibaaz)\n"
           "\n"
           "Main farebi\n"
           "Haan farebi\n"
           "Kya kahegi\n"
           "Ye\n"
           "\n"
           "Kya teri saari batein?\n"
           "\n"
           "Hain farebi\n"
           "Main farebi\n"
           "Jaan legi ye\n"
           "\n"
           "Laila ko lagtaa hu\n"
           "Main farebi\n"
           "Haan farebi\n"
           "Kya kahegi\n"
           "Ye\n"
           "\n"
           "Kya meri saari batein hain\n"
           "Farebi\n"
           "Main farebi\n"
           "Jaan legi ye\n");
            break;

        default:
            fprintf(lessPipe, "ITNE HI OPTIONS HAIN BHAI ABHI :_)\n");
            break;
    }

    pclose(lessPipe);
    return 0;
}

/*
 *
 * this part of code was ai generated because i wanted to test if i can create a scrollable file for these lyrics *
 ILE *lessPipe = popen("less", "w");
    if (!lessPipe) {
        perror("popen failed");
        return 1;
    }

    // Use switch-case to display lyrics based on user input
    switch (name) {
        case 1:
            // Lyrics for "Farebi"
            fprintf(lessPipe,
            "...lyrics of the song...."
           break;

        case 2:
            // Lyrics for "11K"
            fprintf(lesspipe, "..lyrics of the song...")
               
            break;

        default:
            // Message for invalid input
            fprintf(lessPipe, "ITNE HI OPTIONS HAIN BHAI ABHI :_)\n");
            break;
    }

    // Close the pipe to 'less'
    pclose(lessPipe);
*/
