/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TSortingPostProcess.h>

@interface FI_TListViewPostProcess : FI_TSortingPostProcess {

	BOOL _seenAnyColorTags;

}

@property (readonly) BOOL seenAnyColorTags;              //@synthesize seenAnyColorTags=_seenAnyColorTags - In the implementation block
-(void)processNodes:(TFENodeVector*)arg1 andGroup:(TGroupedNodes*)arg2 withCanceledFlag:(BOOL*)arg3 ;
-(id)initWithComparator:(TBaseNodeComparator*)arg1 andGroupManager:(TGroupManager*)arg2 ;
-(BOOL)seenAnyColorTags;
@end

