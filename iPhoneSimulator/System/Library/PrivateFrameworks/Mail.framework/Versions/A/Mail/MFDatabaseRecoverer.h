/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCondition, NSString;

@interface MFDatabaseRecoverer : NSObject {

	NSCondition* _analysisCondition;
	NSString* _path;
	long long _type;
	long long _analysisResult;

}

@property (copy) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (assign) long long type;                        //@synthesize type=_type - In the implementation block
@property (assign) long long analysisResult;              //@synthesize analysisResult=_analysisResult - In the implementation block
+(id)moveDatabaseToUniquePath:(id)arg1 ;
+(char)moveDatabaseFromPath:(id)arg1 toPath:(id)arg2 ;
-(id)initWithPath:(id)arg1 type:(long long)arg2 ;
-(void)analyzeBusyCondition;
-(void)setAnalysisResult:(long long)arg1 ;
-(char)aRemoteApplicationIsAccessingTheDatabase;
-(void)_analyzeBusyCondition;
-(long long)analysisResult;
-(char)lockFileFound;
-(char)fileLocked;
-(id)_moveToUniquePath;
-(void)_removeLocks;
-(void)removeLockFile;
-(void)_moveToOriginalPath:(id)arg1 ;
-(void)recover;
-(id)init;
-(NSString *)path;
-(long long)type;
-(void)setPath:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
@end

