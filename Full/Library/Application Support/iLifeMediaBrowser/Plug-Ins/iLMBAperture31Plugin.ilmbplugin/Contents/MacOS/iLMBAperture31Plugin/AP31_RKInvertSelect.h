/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperture31Plugin.ilmbplugin/Contents/MacOS/iLMBAperture31Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBAperture31Plugin/AP31_RKSelect.h>

@class AP31_RKSelect;

@interface AP31_RKInvertSelect : AP31_RKSelect {

	AP31_RKSelect* _select;

}
+(id)invertSelect:(id)arg1 ;
-(id)matchingVersionIdsLimitedTo:(id)arg1 fromDatabase:(id)arg2 ;
-(id)queryWithBindingValues:(id)arg1 bindingVariables:(id)arg2 limitedTo:(id)arg3 fromDatabase:(id)arg4 ;
-(id)initWithSelect:(id)arg1 ;
-(id)descriptionWithIndent:(long long)arg1 ;
-(void)dealloc;
@end
