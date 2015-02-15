/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:18 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSTokenFieldCell.h>

@protocol SOTokenFieldCellDragDelegate;
@interface SOTokenFieldCell : NSTokenFieldCell {

	unsigned _dragDelegateRespondsToTokenFieldCellDidBeginDragOperation;
	unsigned _dragDelegateRespondsToTokenFieldCellDidEndDragOperation;
	id<SOTokenFieldCellDragDelegate> _dragDelegate;

}

@property (assign,nonatomic,__weak) id<SOTokenFieldCellDragDelegate> dragDelegate;              //@synthesize dragDelegate=_dragDelegate - In the implementation block
-(void)setDragDelegate:(id<SOTokenFieldCellDragDelegate>)arg1 ;
-(id<SOTokenFieldCellDragDelegate>)dragDelegate;
-(id)setUpFieldEditorAttributes:(id)arg1 ;
-(char)tokenAttachment:(id)arg1 doubleClickedInRect:(CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 ;
-(void)_setPerformingDrop:(char)arg1 ;
@end

