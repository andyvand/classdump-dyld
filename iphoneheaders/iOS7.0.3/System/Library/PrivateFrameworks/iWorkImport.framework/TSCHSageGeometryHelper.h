/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartInfo, TSDInfoGeometry;

@interface TSCHSageGeometryHelper : NSObject {

	TSCHChartInfo* mChartInfo;
	TSDInfoGeometry* mImportedInfoGeometry;

}
+(id)helperWithImportedChartInfo:(id)arg1 importedInfoGeometry:(id)arg2 ;
+(CGRect)sageChartAreaBoundsForExportWithChartInfo:(id)arg1 geometryRect:(CGRect)arg2 returningContainingViewportSize:(id*)arg3 ;
-(id)initWithImportedChartInfo:(id)arg1 importedInfoGeometry:(id)arg2 ;
-(void)dealloc;
-(CGSize)naturalSize;
@end
