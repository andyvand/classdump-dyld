/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/diskmanagementd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <diskmanagementd/diskmanagementd-Structs.h>
#import <diskmanagementd/DMTool.h>
#import <diskmanagementd/DMToolProcessController.h>

@class NSLocale, NSMutableDictionary, NSNumberFormatter, NSString, DMToolProcess, NSMutableString;

@interface DMToolRepairDiskSTOR : DMTool <DMToolProcessController> {

	long long _verb;
	char _callerDesiredCancel;
	char _operationAlreadyInProgress;
	char _finishingInProgress;
	char _finished;
	NSLocale* _locale;
	NSMutableDictionary* _localizedMessageStrings;
	NSNumberFormatter* _localizedNumberFormatter;
	DMUDSPrivRec _currentTarget_DiskUDS;
	NSString* _currentTarget_StorageSystem;
	DMToolProcess* _dmToolProcess;
	int _errorToReportDM;
	int _errorToReportTL;
	unsigned long long _callerDesiredPercentBegin;
	unsigned long long _callerDesiredPercentEnd;
	long long _fsckParse_format;
	NSMutableString* _toolTextOutputAccumulator;
	NSMutableString* _xmlDocAccumulator;

}
-(void)processStartedOnDisk:(DMUDSPrivRec*)arg1 ;
-(void)processAppendOutput:(id)arg1 onDisk:(DMUDSPrivRec*)arg2 ;
-(void)processReportError:(int)arg1 onDisk:(DMUDSPrivRec*)arg2 ;
-(void)processFinishedOnDisk:(DMUDSPrivRec*)arg1 remount:(char)arg2 enablePermissions:(char)arg3 ;
-(void)fsckParse_started;
-(void)fsckParse_append:(id)arg1 ;
-(void)fsckParse_error:(int)arg1 ;
-(void)fsckParse_finished;
-(void)makeReport_startedForDisk:(DMUDSPrivRec*)arg1 ;
-(void)fsckParse_1_WildToLines:(id)arg1 ;
-(void)fsckParse_2_LinesToRawLinesOrOneCompleteXmlDoc:(id)arg1 ;
-(void)makeReport_messageForDisk:(DMUDSPrivRec*)arg1 string:(id)arg2 dictionary:(id)arg3 ;
-(void)fsckParse_3_XmlDocToDict:(id)arg1 ;
-(void)fsckParse_4_InterpretFsckMsg:(id)arg1 ;
-(void)makeReport_progressForDisk:(DMUDSPrivRec*)arg1 barberPole:(char)arg2 percent:(float)arg3 ;
-(void)fsckParse_5_LocalizeThenParameterize:(id)arg1 params:(id)arg2 msgDictPassThru:(id)arg3 ;
-(id)fsckParse_6_RenderParameter:(id)arg1 ;
-(void)makeReport_finishedForDisk:(DMUDSPrivRec*)arg1 mainError:(int)arg2 detailError:(int)arg3 dictionary:(id)arg4 ;
-(int)storagesystemVerifyOrRepair:(DMUDSPrivRec*)arg1 members:(id)arg2 repair:(char)arg3 detailError:(int*)arg4 percentBegin:(unsigned long long)arg5 percentEnd:(unsigned long long)arg6 ;
-(void)cancelCurrentOperation;
-(void)done;
-(id)init;
-(void)dealloc;
@end

