/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TPropertyPhysicalSizeExtractor.h>

@interface FI_TPropertyInfoWindowSizeExtractor : FI_TPropertyPhysicalSizeExtractor {

	BOOL _shouldGetItemCount;

}
-(id)extractValueFromNodes:(const TFENodeVector*)arg1 ;
-(BOOL)needsUpdateForProperty:(unsigned)arg1 ;
-(int)extractValueFromNode:(const TFENode*)arg1 ;
-(id)computeValue;
-(BOOL)isWaitingForPendingNode:(const TFENode*)arg1 ;
-(id)init;
-(void)flush;
-(id)defaultValue;
@end

