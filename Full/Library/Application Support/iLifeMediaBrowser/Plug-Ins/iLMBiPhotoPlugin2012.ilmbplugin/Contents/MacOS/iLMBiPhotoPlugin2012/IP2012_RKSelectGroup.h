/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhotoPlugin2012.ilmbplugin/Contents/MacOS/iLMBiPhotoPlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBiPhotoPlugin2012/IP2012_RKSelect.h>

@class NSMutableArray;

@interface IP2012_RKSelectGroup : IP2012_RKSelect {

	int _combine;
	NSMutableArray* _subQueries;

}
+(id)intersectWithSubQueries:(id)arg1 ;
+(id)unionWithSubQueries:(id)arg1 ;
+(id)intersectSelects:(id)arg1 ;
+(id)groupWithCombine:(int)arg1 subQueries:(id)arg2 ;
+(id)unionSelects:(id)arg1 ;
-(int)combine;
-(void)setCombine:(int)arg1 ;
-(id)matchingVersionIdsLimitedTo:(id)arg1 fromDatabase:(id)arg2 ;
-(id)queryWithBindingValues:(id)arg1 bindingVariables:(id)arg2 limitedTo:(id)arg3 fromDatabase:(id)arg4 ;
-(id)initWithCombine:(int)arg1 subQueries:(id)arg2 ;
-(void)addSubQuery:(id)arg1 ;
-(void)setCanceler:(id)arg1 ;
-(id)descriptionWithIndent:(long long)arg1 ;
-(void)dealloc;
-(char)isEmpty;
@end

