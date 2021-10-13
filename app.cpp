// სამის და ხუთის ნამრავლების ჯამი რომლებიც 1000 ზე ნაკლებია

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int sum = 0;
//     for (int i = 1; i <= 1000; i++)
//     {
//         if (i % 3 == 0 || i % 5 == 0)
//         {
//             cout << i << endl;
//             sum += i;
//         }
//     }
//     cout << "jami aris: " << sum << endl;
// }

//res 234168

// უმცირესი რიცხვი რომელიც 1-20 მდე უნაშთოდ იყოფა

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10, b = 11;
//     while (b <= 20)
//     {
//         if (a % b == 0)
//             b++;
//         else
//         {
//             a++;
//             b = 11;
//         }
//     }
//     cout << a << endl;
// }

// res 232792560

// რა არის 10001 - ე მარტივი რიცხვი ?

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, counter = 0;
//     for (i = 2; i < 110000; i++)
//     {
//         for (j = 2; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 break;
//             }
//         }

//         if (i == j)
//         {
//             counter++;
//             if (counter == 10001)
//                 cout << counter << " : " << i << endl;
//         }
//     }
// }

// res 104743

//იპოვეთ მარტივი რიცხვების ჯამი, რომლებიც ნაკლებია 2 მილიონზე.
// 2 000 000 ძალიან დიდ ხანს ანდომებს !!!!
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, sum = 0;
//     for (i = 2; i <= 200000; i++)
//     {
//         for (j = 2; j <= i; j++)
//         {

//             if (i % j == 0)

//                 break;
//         }
//         if (i == j)
//             sum += i;
//     }
//     cout << "jami aris : " << sum << endl;
//     return 0;
// }

// თუ რიცხვი ლუწია - გაყოფს 2-ზე
// თუ რიცხვი კენტია - გაამრავლებს 3-ზე და დაუმატებს 1-ს.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int input;
//     cout << "Enter Number ! : ";
//     cin >> input;
//     if (input % 2 == 0)
//     {
//         cout << "luwia ! : \n"
//              << input << " / " << 2 << " = " << input / 2 << endl;
//     }
//     else
//     {
//         cout << "Kentia" << endl;
//         cout << input << " * " << 3 << " + " << 1 << " = " << (input * 3) + 1 << endl;
//     }
//     return 0;
// }

// 1 მილიონზე ნაკლები რომელი რიცხვს აქვს ყველაზე გრძელი მიმდევრობა. ასევე აჩვენეთ რამდენია ამ ჯაჭვის (მიმდევრობის) სიგრძე.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int maxi = 0, maxlen = 1;
//     for (int i = 2; i <= 1000000; i++)
//     {
//         int len = 1;
//         for (int n = i; n > 1; len++)
//         {
//             n = n % 2 ? n * 3 + 1 : n / 2;
//         }
//         if (len > maxlen)
//         {
//             maxlen = len;
//             maxi = i;
//         }
//     }
//     cout << maxi << ": " << maxlen << '\n';
// }