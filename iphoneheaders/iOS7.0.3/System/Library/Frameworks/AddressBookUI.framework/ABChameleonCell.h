/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol ABStyleProvider;
@class ;

@interface ABChameleonCell : UITableViewCell {

	int _abCellStyle;
	<ABStyleProvider>* _styleProvider;
	BOOL _hasConfiguredBackgroundViews;

}

@property (assign,nonatomic) int abCellStyle;                                //@synthesize abCellStyle=_abCellStyle - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)setAbCellStyle:(int)arg1 ;
-(int)abCellStyle;
-(void)_updateBackgroundViewsForCellStyleAndLocation;
-(void)_updateTextStylesForCellStyle;
-(void)dealloc;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
@end
