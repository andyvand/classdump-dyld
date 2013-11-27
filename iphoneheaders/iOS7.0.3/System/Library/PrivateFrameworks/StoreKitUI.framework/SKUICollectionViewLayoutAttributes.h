/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <CoreFoundation/NSCopying.h>

@class UIColor;

@interface SKUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	UIColor* _backgroundColor;
	int _position;

}

@property (nonatomic,copy) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) int position;                         //@synthesize position=_position - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void).cxx_destruct;
@end
