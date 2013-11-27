/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICachedLayout.h>

@class NSArray;

@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout> {

	CGSize* _sizes;
	CGSize _totalSize;
	NSArray* _links;

}

@property (nonatomic,readonly) NSArray * links;               //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) CGSize totalSize;              //@synthesize totalSize=_totalSize - In the implementation block
-(void)enumerateLinesUsingBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)links;
-(id)initWithLayoutRequest:(id)arg1 ;
-(CGSize)sizeForLinkAtIndex:(int)arg1 ;
-(CGSize)totalSize;
-(void).cxx_destruct;
@end
