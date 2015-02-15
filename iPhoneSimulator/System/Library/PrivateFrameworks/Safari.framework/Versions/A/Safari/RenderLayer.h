/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSMutableArray, NSArray, NSString;

@interface RenderLayer : NSObject {

	RenderLayer* _renderLayer;
	NSMutableArray* _children;

}

@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * positionString; 
@property (nonatomic,readonly) NSString * widthString; 
@property (nonatomic,readonly) NSString * heightString; 
@property (nonatomic,readonly) char isComposited; 
@property (nonatomic,readonly) NSString * compositingInfo; 
@property (nonatomic,readonly) char isSeparator; 
-(id)initWithWKRenderLayer:(const RenderLayer*)arg1 ;
-(void)_addListToChildren:(const Array*)arg1 withTitle:(id)arg2 ;
-(NSString *)positionString;
-(NSString *)widthString;
-(NSString *)heightString;
-(NSString *)compositingInfo;
-(char)isComposited;
-(char)isSeparator;
-(NSString *)name;
-(NSArray *)children;
@end

