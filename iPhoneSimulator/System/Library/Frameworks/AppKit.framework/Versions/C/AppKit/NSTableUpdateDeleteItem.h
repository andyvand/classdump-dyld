/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableUpdateItem2.h>

@class NSTableRowView;

@interface NSTableUpdateDeleteItem : NSTableUpdateItem2 {

	NSTableRowView* _viewToDelete;

}

@property (nonatomic,retain) NSTableRowView * viewToDelete;              //@synthesize viewToDelete=_viewToDelete - In the implementation block
-(void)dealloc;
-(NSTableRowView *)viewToDelete;
-(id)initWithRowAnimation:(unsigned long long)arg1 ;
-(void)setViewToDelete:(NSTableRowView *)arg1 ;
@end

