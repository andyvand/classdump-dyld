/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableUpdateItem2.h>

@class NSTableRowView;

@interface NSTableUpdateInsertItem : NSTableUpdateItem2 {

	NSTableRowView* _viewToAnimateFrom;

}

@property (nonatomic,retain) NSTableRowView * viewToAnimateFrom;              //@synthesize viewToAnimateFrom=_viewToAnimateFrom - In the implementation block
-(void)dealloc;
-(NSTableRowView *)viewToAnimateFrom;
-(void)setViewToAnimateFrom:(NSTableRowView *)arg1 ;
@end

