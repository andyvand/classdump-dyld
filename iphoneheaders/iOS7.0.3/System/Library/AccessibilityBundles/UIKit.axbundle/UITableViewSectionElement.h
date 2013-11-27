/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:37:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementMockViewDelegateProtocol.h>

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {

	BOOL _isHeader;
	int _section;
	NSMutableArray* _children;

}

@property (assign,nonatomic) int section;                //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL isHeader;              //@synthesize isHeader=_isHeader - In the implementation block
-(void)_accessibilityClearChildren;
-(void)updateMockView:(id)arg1 ;
-(void)setIsHeader:(BOOL)arg1 ;
-(BOOL)isHeader;
-(id)_accessibilityAccessibleElementsInView:(id)arg1 ;
-(void)_appendTextChildWithTitle:(id)arg1 ;
-(id)accessibilityChildren;
-(void)dealloc;
-(id)description;
-(int)section;
-(CGRect)accessibilityFrame;
-(BOOL)isAccessibilityElement;
-(id)accessibilityIdentifier;
-(void)setSection:(int)arg1 ;
-(BOOL)_accessibilityIsNotFirstElement;
-(id)accessibilityContainerElements;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)accessibilityScrollToVisible;
@end
