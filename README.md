# C-dili örnek ve soru çözümleri
*******************************************
S1-)Kullanıcıdan alınan X ve Y tam sayıları için (X<Y olduğu varsayılacaktır), X – Y aralığındaki tüm Germain asal sayılarını bir diziye ekleyen ve bu dizideki elemanları ekrana yazdıran programı yazınız. Germain asal sayısı, asal olan bir p sayısı için 2p+1 sayısının da asal olması şartını sağlaması özelliğidir. Bu soruda ek bir dizi kullanılmayacaktır.

Örnek:
X ve Y Giriniz : 2 15
Aralıktaki Germain Asal Sayıları : 2-3-5-11
*******************************************
S2-)N elemanlı bir pozitif tamsayı A dizisine N farklı sayı kullanıcıdan alınacaktır. Sayıların pozitif girilmemesi durumu kontrol edilecek ve değerlerin doğru girilmesi sağlanacaktır. Bu tamsayılardan iki farklı dizinin (X ve Y) karşılıklı indisleri ikili bir bağıntının sıralı ikilileri olacak şekilde aşağıdaki bağıntı kuralına göre yazdırılacaktır. Bu işlem sonrasında bu dizilerdeki sıralı ikililerden yola çıkarak bağıntının yansıma ve simetri özelliğini sağlayıp sağlamadığı ekrana yazdırılacaktır. Sıralı ikili (Xi, Yi) şeklindedir. Bu soruda hiçbir şekilde matris ve ek bir dizi kullanılmayacaktır. 
Bağıntı Kuralı: R:{(X,Y) | X böler 2-Y} (2-Y MOD X = 0)

Örnek: Aşağıdaki örnek A dizisi için yukarıdaki kurala göre oluşacak olan bağıntı şu şekildedir R={(1,1)(1,2)(1,3)(1,4)(1,5)(2,2)(2,4)(3,2)(3,5)(4,2)(5,2)} Buna göre X ve Y dizileri aşağıdaki gibi elde edilmeli ve sonucu örnekte olduğu gibi yazdırmalıdır.
A = {1, 2, 3, 4, 5}
X = {1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 5}
Y = {1, 2, 3, 4, 5, 2, 4, 2, 5, 2, 2}
Sonuç: Bu bağıntı yansıma ve simetri özelliğini sağlamamaktadır.
******************************************
S3-)N elemanlı bir tamsayı A dizisine N farklı pozitif sayı kullanıcıdan alınacaktır. Sayıların pozitif girileceği varsayılacak ve pozitif girilmemesi durumu kontrol edilmeyecektir. Bu tamsayıların tamamının en büyük ortak böleni ve en küçük ortak katı hesaplanarak ekrana yazılacaktır.

Örnek: N = 4 için kullanıcıdan alınan değerler A dizisinde A = [10, 50, 15, 30] şeklinde saklansın. Sonuç olarak aşağıdaki çıktı ekrana yazılmalıdır.
OBEB(10, 50, 15, 30) = 5, OKEK(10, 50, 15,30) = 150
