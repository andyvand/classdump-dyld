/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/Frameworks/Growl.framework/Growl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Growl/Growl-Structs.h>
@interface GrowlQuadTreeNode : NSObject {

	long long state;
	CGRect frame;
	GrowlQuadTreeNode* topLeft;
	GrowlQuadTreeNode* topRight;
	GrowlQuadTreeNode* bottomLeft;
	GrowlQuadTreeNode* bottomRight;

}

@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) CGRect frame; 
@property (nonatomic,retain) GrowlQuadTreeNode * topLeft; 
@property (nonatomic,retain) GrowlQuadTreeNode * topRight; 
@property (nonatomic,retain) GrowlQuadTreeNode * bottomLeft; 
@property (nonatomic,retain) GrowlQuadTreeNode * bottomRight; 
-(char)isFrameFree:(CGRect)arg1 ;
-(id)initWithState:(long long)arg1 forRect:(CGRect)arg2 ;
-(char)consolidate;
-(void)occupyFrame:(CGRect)arg1 ;
-(char)createChildren;
-(void)vacateFrame:(CGRect)arg1 ;
-(char)isPointFree:(CGPoint)arg1 ;
-(void)setTopLeft:(GrowlQuadTreeNode *)arg1 ;
-(void)setTopRight:(GrowlQuadTreeNode *)arg1 ;
-(void)setBottomLeft:(GrowlQuadTreeNode *)arg1 ;
-(void)setBottomRight:(GrowlQuadTreeNode *)arg1 ;
-(GrowlQuadTreeNode *)topLeft;
-(GrowlQuadTreeNode *)topRight;
-(GrowlQuadTreeNode *)bottomLeft;
-(GrowlQuadTreeNode *)bottomRight;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(CGRect)frame;
-(void)setState:(long long)arg1 ;
-(long long)state;
@end

