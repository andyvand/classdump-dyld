/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class StarkSearchCompletionGlyphViewLayout, StarkTableViewCellContentView;

@interface StarkTableViewCell : UITableViewCell {

	StarkSearchCompletionGlyphViewLayout* _layout;
	StarkTableViewCellContentView* _actualContentView;

}

@property (nonatomic,readonly) StarkSearchCompletionGlyphViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
+(id)cellForTable:(id)arg1 reuseIdentifier:(id)arg2 ;
+(Class)layoutClass;
-(void)_updateLayoutState;
-(void)setNeedsLayoutForChanges:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)layout;
@end
