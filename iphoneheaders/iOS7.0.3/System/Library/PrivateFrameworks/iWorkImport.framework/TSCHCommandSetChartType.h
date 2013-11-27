/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartCommand.h>

@class TSCHChartType, TSDInfoGeometryCommand, TSKCommand;

@interface TSCHCommandSetChartType : TSCHChartCommand {

	TSCHChartType* mOldType;
	TSCHChartType* mNewType;
	TSDInfoGeometryCommand* mCleanupInfoGeometryCommand;
	TSKCommand* mAnchorAttachmentCommand;
	CGRect mLegendRect;
	int mUndoCollectionDepth;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)p_commitNewGeometry:(id)arg1 ;
-(void)p_commit;
-(void)beginCollectingUndo;
-(id)stopCollectingUndo;
-(void)p_loadFromArchive:(const CommandSetChartTypeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)p_saveToArchive:(CommandSetChartTypeArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 chartType:(id)arg2 interactiveCanvasController:(id)arg3 ;
-(BOOL)p_isSwitchingToPie;
-(BOOL)p_hasDifferentChartBodyBoundsDefinitions;
-(void)commitPrimitive;
-(void)undoPrimitive;
-(void)redoPrimitive;
-(const ChartCommandArchive*)chartCommandArchiveFromUnarchiver:(id)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(BOOL)process;
@end
