/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/MacOS/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/__BKBookshelfCollectionViewCellAccessibility_super.h>

@class NSString, BKAccessibilityCollectionViewButton;

@interface BKBookshelfCollectionViewCellAccessibility : __BKBookshelfCollectionViewCellAccessibility_super {

	id _bkaxLinkedUIElement;

}

@property (assign,setter=bkaxSetDelegate:,nonatomic) id<BKBookshelfCollectionViewCellAccessibilityDelegate> bkaxDelegate; 
@property (assign,setter=bkaxSetLinkedUIElement:,nonatomic) id bkaxLinkedUIElement;                                                    //@synthesize bkaxLinkedUIElement=_bkaxLinkedUIElement - In the implementation block
@property (nonatomic,readonly) char bkaxIsSeriesCell; 
@property (nonatomic,readonly) NSString * bkaxCellTitle; 
@property (nonatomic,readonly) BKAccessibilityCollectionViewButton * bkaxButton; 
+(id)bkaxTargetClassName;
+(Class)bkaxBaseSafeCategoryClass;
-(id<BKBookshelfCollectionViewCellAccessibilityDelegate>)bkaxDelegate;
-(void)bkaxSetDelegate:(id)arg1 ;
-(char)bkaxIsSeriesCell;
-(NSString *)bkaxCellTitle;
-(void)bkaxSetLinkedUIElement:(id)arg1 ;
-(id)bkaxCellDescription;
-(BKAccessibilityCollectionViewButton *)bkaxButton;
-(id)bkaxLinkedUIElement;
-(unsigned long long)bkaxProgressState;
-(id)_bkaxButton;
-(void)_bkaxSetButton:(id)arg1 ;
-(id)bkaxLinkedUIElements;
-(void)bkaxSetLinkedUIElements:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
@end

