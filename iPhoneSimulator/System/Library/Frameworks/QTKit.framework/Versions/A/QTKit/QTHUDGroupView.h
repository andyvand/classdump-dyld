/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <AppKit/NSView.h>

@class NSArray, NSMapTable;

@interface QTHUDGroupView : NSView {

	NSArray* _items;
	NSMapTable* _viewItemMap;
	CFRunLoopObserverRef _observer;

}
+(char)automaticallyNotifiesObserversOfItems;
+(void)initialize;
-(void)layoutSubviews;
-(void)setItems:(id)arg1 ;
-(void)getRects:(CGRect*)arg1 forItemsAtIndexes:(id)arg2 ;
-(CGRect)rectForItemAtIndex:(unsigned long long)arg1 ;
-(void)setNeedsLayout;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)items;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)replaceSubview:(id)arg1 with:(id)arg2 ;
-(void)viewWillDraw;
-(CGSize)maxSize;
-(void)setBoundsOrigin:(CGPoint)arg1 ;
-(void)setBoundsSize:(CGSize)arg1 ;
-(void)layoutIfNeeded;
-(CGSize)minSize;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(char)needsLayout;
@end

