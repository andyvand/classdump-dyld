/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Frameworks/PackageUIKit.framework/Versions/A/PackageUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageUIKit/PackageUIKit-Structs.h>
#import <AppKit/NSMatrix.h>

@protocol PUKDiskPickerHorizontalMatrixKeyResponder;
@interface PUKDiskPickerHorizontalMatrix : NSMatrix {

	id<PUKDiskPickerHorizontalMatrixKeyResponder> responder;

}

@property (nonatomic,retain) id<PUKDiskPickerHorizontalMatrixKeyResponder> responder; 
-(void)setResponder:(id<PUKDiskPickerHorizontalMatrixKeyResponder>)arg1 ;
-(id<PUKDiskPickerHorizontalMatrixKeyResponder>)responder;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)viewWillDraw;
-(void)selectCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(id)_accessibilityChildren;
-(void)_changeSelectionWithEvent:(id)arg1 ;
@end

