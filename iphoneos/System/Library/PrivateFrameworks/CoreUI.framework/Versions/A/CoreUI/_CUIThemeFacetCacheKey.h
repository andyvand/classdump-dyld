/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface _CUIThemeFacetCacheKey : NSObject {

	renditionkeytoken keyList[16];
	long long themeIndex;
	unsigned long long hashPrecalc;

}
-(unsigned long long)hash64;
-(id)initWithKeyList:(const renditionkeytoken*)arg1 themeIndex:(long long)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

