/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/Frameworks/SIUFoundation.framework/Versions/A/XPCServices/com.apple.SIUAgent.xpc/Contents/MacOS/com.apple.SIUAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.SIUAgent/com.apple.SIUAgent-Structs.h>
#import <Foundation/NSOperation.h>

@class NSError, NSString, NSMutableDictionary, NSBundle, NSMutableData, NSTask, SIUImagingProcessParser, DMManager;

@interface CreateImageOperation : NSOperation {

	char _tempFilePath[1024];
	NSError* _errorCode;
	NSString* _outputPath;
	NSString* _failureKey;
	long long _completionStatus;
	char _terminated;
	NSMutableDictionary* _buildDict;
	NSBundle* _operationBundle;
	NSMutableData* _plistData;
	NSTask* _task;
	SIUImagingProcessParser* _parser;
	DADiskRef _sourceDisk;
	DASessionRef _daSession;
	DMManager* _dmManager;

}

@property (nonatomic,retain) NSString * failureKey;                         //@synthesize failureKey=_failureKey - In the implementation block
@property (nonatomic,retain) NSString * outputPath;                         //@synthesize outputPath=_outputPath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * buildDict;               //@synthesize buildDict=_buildDict - In the implementation block
@property (assign,nonatomic) long long completionStatus;                    //@synthesize completionStatus=_completionStatus - In the implementation block
@property (nonatomic,retain) NSBundle * operationBundle;                    //@synthesize operationBundle=_operationBundle - In the implementation block
@property (nonatomic,retain) NSMutableData * plistData;                     //@synthesize plistData=_plistData - In the implementation block
@property (nonatomic,retain) NSTask * task;                                 //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) SIUImagingProcessParser * parser;              //@synthesize parser=_parser - In the implementation block
-(char)writeArray:(id)arg1 toFile:(id)arg2 inDirectory:(id)arg3 ;
-(id)defaultLanguageID;
-(id)initWithDictionary:(id)arg1 proxy:(id)arg2 ;
-(NSString *)outputPath;
-(void)setBuildDict:(NSMutableDictionary *)arg1 ;
-(void)setOperationBundle:(NSBundle *)arg1 ;
-(void)setParser:(SIUImagingProcessParser *)arg1 ;
-(void)setFailureKey:(NSString *)arg1 ;
-(void)setOutputPath:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 withDetails:(id)arg2 function:(const char*)arg3 line:(int)arg4 ;
-(void)logSuccessfulCompletion;
-(NSString *)failureKey;
-(void)logAString:(id)arg1 ;
-(id)getAutomatedInstallDataFromDirectory:(id)arg1 ;
-(NSMutableDictionary *)buildDict;
-(char)writeAutomationInfo:(id)arg1 toDirectory:(id)arg2 ;
-(NSBundle *)operationBundle;
-(void)resetPermissionsForSource;
-(void)logCreationType;
-(id)doTargetNameMagic:(id)arg1 ;
-(id)sourceVolumePathFromRecord:(id)arg1 ;
-(id)addUsersFromImageData:(id)arg1 toVariables:(id)arg2 ;
-(void)processConfigurationKeys:(id)arg1 toDirectory:(id)arg2 addlItems:(id)arg3 resetLocalKDC:(char)arg4 ;
-(char)addPackagesFromImageData:(id)arg1 forInstallSource:(id)arg2 size:(unsigned long long*)arg3 ;
-(char)preFlightDestination:(id)arg1 forSize:(unsigned long long)arg2 withSource:(id)arg3 ;
-(void)createPerCPUDSBindings:(id)arg1 inDirectory:(id)arg2 ;
-(char)processConfigurationProfiles:(id)arg1 toDirectory:(id)arg2 ;
-(void)addUniqueString:(id)arg1 toArray:(id)arg2 ;
-(char)writeArray:(id)arg1 toPath:(char*)arg2 ;
-(char)copyFiles:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(char)diskImageTypeIsUDIF;
-(id)volumeOfPath:(id)arg1 ;
-(unsigned long long)availableSpaceOnVolume:(id)arg1 error:(id*)arg2 ;
-(id)preferenceForSIUKey:(id)arg1 ;
-(unsigned)getUID;
-(unsigned)getGID;
-(id)escapedQuoteString:(id)arg1 ;
-(char)writeLanguageDefaultsToDirectory:(id)arg1 forLangID:(id)arg2 ;
-(char)writePackageChoices:(id)arg1 toDirectory:(id)arg2 ;
-(id)unixSafeString:(id)arg1 ;
-(id)templateNameForLanguage:(id)arg1 ;
-(char)isValidRestoreImage:(id)arg1 error:(id*)arg2 ;
-(void)getImageData:(id)arg1 ;
-(id)userConfigurationDictionary;
-(long long)runBuildScript:(id)arg1 withArguments:(id)arg2 ;
-(char)addAutomationInfo:(id)arg1 toDirectory:(id)arg2 usingPackage:(id)arg3 additionalEntries:(id)arg4 ;
-(char)finalizeImage:(id)arg1 ;
-(void)postCreationCleanup;
-(id)prepareForImageCreation;
-(void)insurePermissionsEnabledForSource:(id)arg1 ;
-(char)prepareImageInstallFromData:(id)arg1 forSource:(id)arg2 paramsDict:(id)arg3 isRestore:(char)arg4 ;
-(char)removeFiles:(id)arg1 atPath:(id)arg2 ;
-(char)writePartitionInfo:(id)arg1 toDirectory:(id)arg2 ;
-(id)firstSourceRecordFromDict:(id)arg1 ;
-(id)sourceTypeFromRecord:(id)arg1 ;
-(id)sourceVolumeKindFromRecord:(id)arg1 ;
-(char)sourceVolumeIsInstallMedia:(id)arg1 ;
-(void)deleteTemporaryDirectory;
-(id)dictionaryForPath:(id)arg1 size:(id)arg2 ;
-(id)extensionForDiskImage;
-(void)ifNeededAddDefaultNamingToDictionary:(id)arg1 ;
-(unsigned long long)usedSpaceOnVolume:(id)arg1 error:(id*)arg2 ;
-(char)writeVarsFileToDirectory:(id)arg1 usingDictionary:(id)arg2 ;
-(char)validateInstallType:(id)arg1 fromMountRecord:(id)arg2 error:(id*)arg3 ;
-(id)errorString;
-(void)getData:(id)arg1 ;
-(void)setTask:(NSTask *)arg1 ;
-(NSTask *)task;
-(id)createTemporaryDirectory;
-(long long)logLevel;
-(SIUImagingProcessParser *)parser;
-(void)setPlistData:(NSMutableData *)arg1 ;
-(NSMutableData *)plistData;
-(long long)completionStatus;
-(void)setCompletionStatus:(long long)arg1 ;
-(id)localizedStringForKey:(id)arg1 ;
-(void)dealloc;
-(id)error;
-(void)setError:(id)arg1 ;
-(id)resourcePath;
-(void)shouldStop;
@end

