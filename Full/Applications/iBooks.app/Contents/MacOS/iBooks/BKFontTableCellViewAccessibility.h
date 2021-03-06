/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/MacOS/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/__BKFontTableCellViewAccessibility_super.h>
#import <iBooks/BKAccessibilityTableViewCell.h>

@class NSString;

@interface BKFontTableCellViewAccessibility : __BKFontTableCellViewAccessibility_super <BKAccessibilityTableViewCell>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAccessibilityElement) char accessibilityElement; 
@property (assign,setter=bkaxSetDelegate:,nonatomic) id<BKAccessibilityTableViewDelegate> bkaxDelegate; 
+(id)bkaxTargetClassName;
+(Class)bkaxBaseSafeCategoryClass;
-(id<BKAccessibilityTableViewDelegate>)bkaxDelegate;
-(void)bkaxSetDelegate:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(char)accessibilityPerformPress;
-(id)accessibilityValue;
-(id)accessibilityRole;
-(id)accessibilityChildren;
-(id)accessibilityLabel;
@end

