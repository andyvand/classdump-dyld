/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/NSCopying.h>
#import <CorePDF/CPCopying.h>

@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying> {

	CPShape* neighborShape;
	int shapeSide;

}
-(id)initSuper;
-(id)neighborShape;
-(int)shapeSide;
-(void)setNeighborShape:(id)arg1 ;
-(void)setShapeSide:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
