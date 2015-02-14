/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSGraphicsContext, NSTableView;

@interface NSTableOverlappingColumnClipHelper : NSObject {

	NSGraphicsContext* _graphicsContext;
	NSTableView* _tableView;
	CGRect _origClipRect;
	CGRect _currClipRect;
	char _isClipping;

}
-(void)dealloc;
-(void)clearClipping;
-(id)initWithTableView:(id)arg1 clipRect:(CGRect)arg2 ;
-(CGRect)currentClipRect;
-(char)clipForDrawingRow:(long long)arg1 column:(long long)arg2 ;
@end

