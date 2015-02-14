/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TTableViewItem.h>

@class NSArray;

@interface FI_TOutlineViewItem : FI_TTableViewItem {

	TNSRef<NSMutableArray *> _children;
	BOOL _isLeaf;

}

@property (nonatomic,retain,readonly) NSArray * children; 
@property (assign) BOOL isLeaf;                                        //@synthesize isLeaf=_isLeaf - In the implementation block
-(id)flattenedChildren;
-(void)setIsLeaf:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isLeaf;
-(NSArray *)children;
@end

