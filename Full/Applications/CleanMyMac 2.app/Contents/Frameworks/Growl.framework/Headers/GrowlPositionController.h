/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/Growl.framework/Growl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Growl/Growl-Structs.h>
@class GrowlQuadTreeNode, NSMutableArray;

@interface GrowlPositionController : NSObject {

	QuadTreeNode* c_rootNode;
	GrowlQuadTreeNode* rootNode;
	NSMutableArray* allColumns;
	NSMutableArray* leftColumns;
	NSMutableArray* rightColumns;
	double availableWidth;
	CGRect screenFrame;
	char updateFrame;
	CGRect newFrame;
	unsigned long long deviceID;

}

@property (assign,nonatomic) CGRect screenFrame; 
@property (assign,nonatomic) char updateFrame; 
@property (assign,nonatomic) CGRect newFrame; 
@property (assign,nonatomic) unsigned long long deviceID; 
@property (assign,nonatomic) QuadTreeNode* c_rootNode; 
@property (nonatomic,retain) GrowlQuadTreeNode * rootNode; 
@property (nonatomic,retain) NSMutableArray * allColumns; 
@property (nonatomic,retain) NSMutableArray * leftColumns; 
@property (nonatomic,retain) NSMutableArray * rightColumns; 
@property (assign,nonatomic) double availableWidth; 
-(id)initWithScreenFrame:(CGRect)arg1 ;
-(char)isFrameFree:(CGRect)arg1 ;
-(void)setUpdateFrame:(char)arg1 ;
-(void)setNewFrame:(CGRect)arg1 ;
-(CGRect)canFindSpotForSize:(CGSize)arg1 startingInPosition:(int)arg2 ;
-(void)occupyRect:(CGRect)arg1 ;
-(void)vacateRect:(CGRect)arg1 ;
-(CGRect)newFrame;
-(void)setAllColumns:(NSMutableArray *)arg1 ;
-(void)setLeftColumns:(NSMutableArray *)arg1 ;
-(void)setRightColumns:(NSMutableArray *)arg1 ;
-(char)addColumnOfWidth:(double)arg1 inDirection:(int)arg2 ;
-(unsigned long long)nextColumnIndexFromIndex:(unsigned long long)arg1 inDirection:(int)arg2 forWidth:(double)arg3 ;
-(char)canResizeColumn:(unsigned long long)arg1 toWidth:(double)arg2 ;
-(id)columForRect:(CGRect)arg1 ;
-(char)canAddColumnOfWidth:(double)arg1 ;
-(QuadTreeNode*)c_rootNode;
-(void)setC_rootNode:(QuadTreeNode*)arg1 ;
-(NSMutableArray *)allColumns;
-(NSMutableArray *)leftColumns;
-(NSMutableArray *)rightColumns;
-(double)availableWidth;
-(void)setAvailableWidth:(double)arg1 ;
-(char)resizeColumn:(unsigned long long)arg1 toWidth:(double)arg2 ;
-(CGRect)screenFrame;
-(void)setScreenFrame:(CGRect)arg1 ;
-(void)dealloc;
-(unsigned long long)deviceID;
-(GrowlQuadTreeNode *)rootNode;
-(void)setRootNode:(GrowlQuadTreeNode *)arg1 ;
-(char)updateFrame;
-(void)setDeviceID:(unsigned long long)arg1 ;
@end

