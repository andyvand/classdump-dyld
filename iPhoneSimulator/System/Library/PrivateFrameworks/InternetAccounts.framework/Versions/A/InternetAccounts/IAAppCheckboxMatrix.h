/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IAAppCheckboxMatrixRowItemDelegateProtocol.h>

@class NSMutableArray, NSView;

@interface IAAppCheckboxMatrix : NSObject <IAAppCheckboxMatrixRowItemDelegateProtocol> {

	NSMutableArray* _items;
	NSView* _view;
	id _delegate;

}

@property (retain) id<IAAppCheckboxMatrixRowItemDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)syncUI;
-(void)checkboxClicked:(id)arg1 ;
-(id)itemForApp:(id)arg1 ;
-(void)setDelegate:(id<IAAppCheckboxMatrixRowItemDelegateProtocol>)arg1 ;
-(id)view;
-(id<IAAppCheckboxMatrixRowItemDelegateProtocol>)delegate;
-(id)selectedItems;
-(double)rowHeight;
-(id)initWithItems:(id)arg1 ;
@end

