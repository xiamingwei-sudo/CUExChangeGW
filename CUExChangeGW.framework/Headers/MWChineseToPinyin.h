#import <UIKit/UIKit.h>

@interface MWChineseToPinyin : NSObject {
    
}

+ (NSString *) pinyinFromChiniseString:(NSString *)string;
/**
 @func          汉字转全拼，小写输出
 @param string  需要传唤的汉字
 @param space   转换后是否带空格
 @return        转换后的全拼
 */
+ (NSString *)pinyinFromChineseString:(NSString *)string withSpace:(BOOL)space;
+ (char) sortSectionTitle:(NSString *)string;

char mwPinyinFirstLetter(unsigned short hanzi);

@end

