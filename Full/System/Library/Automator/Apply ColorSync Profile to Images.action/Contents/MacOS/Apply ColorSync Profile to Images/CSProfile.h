/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:55:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Apply ColorSync Profile to Images.action/Contents/MacOS/Apply ColorSync Profile to Images
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Apply ColorSync Profile to Images/Apply ColorSync Profile to Images-Structs.h>
@interface CSProfile : NSObject {

	ColorSyncProfileRef ref;
	CFURLRef url;
	int profClass;
	CFStringRef profName;
	CFStringRef profPath;
	SCD_Struct_CS3 md5;

}
+(id)newWithPath:(CFStringRef)arg1 ;
+(id)newWithIterateData:(CFDictionaryRef)arg1 ;
-(id)initWithCFPath:(CFStringRef)arg1 ;
-(id)initWithIterateData:(CFDictionaryRef)arg1 ;
-(SCD_Struct_CS3)md5;
-(id)profName;
-(int)profClass;
-(id)profPath;
-(ColorSyncProfileRef)ref;
-(void)dealloc;
-(CFURLRef)url;
@end

