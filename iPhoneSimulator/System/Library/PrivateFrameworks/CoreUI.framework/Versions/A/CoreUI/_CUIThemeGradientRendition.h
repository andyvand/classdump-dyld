/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIThemeGradient;

@interface _CUIThemeGradientRendition : CUIThemeRendition {

	CUIThemeGradient* gradient;
	double gradientAngle;

}
+(id)_filteredCSIDataFromBaseCSIData:(id)arg1 ;
+(id)_nodesFromNodeList:(csigradientdatanode*)arg1 count:(unsigned long long)arg2 header:(const csiheader*)arg3 ;
+(_CUIThemeGradientRenditionInitializerStruct)_parseGradientInfoFromCSIHeader:(const csiheader*)arg1 ;
-(double)gradientDrawingAngle;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(unsigned)gradientStyle;
-(void)dealloc;
-(id)gradient;
@end

