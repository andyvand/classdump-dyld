/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateIssues.framework/DevMateIssues
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DMReport_ISSUES, NSString, NSDictionary;

@interface DMWebReportGenerator_ISSUES : NSObject {

	char _allowToSendUserData;
	DMReport_ISSUES* _report;
	NSString* _consoleLog;
	NSDictionary* _preferences;
	NSString* _systemProfile;
	NSDictionary* _webReport;

}

@property (nonatomic,retain) DMReport_ISSUES * report;                //@synthesize report=_report - In the implementation block
@property (nonatomic,readonly) NSString * mainAppPath; 
@property (nonatomic,retain) NSString * consoleLog;                   //@synthesize consoleLog=_consoleLog - In the implementation block
@property (nonatomic,retain) NSDictionary * preferences;              //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) NSString * systemProfile;                //@synthesize systemProfile=_systemProfile - In the implementation block
@property (assign,nonatomic) char allowToSendUserData;                //@synthesize allowToSendUserData=_allowToSendUserData - In the implementation block
@property (nonatomic,retain) NSDictionary * webReport;                //@synthesize webReport=_webReport - In the implementation block
+(id)generatorWithReport:(id)arg1 ;
+(void)registerReportGenerator:(Class)arg1 forReport:(Class)arg2 ;
+(id)reportGeneratorsMap;
+(void)load;
-(id)JSONReport;
-(NSString *)mainAppPath;
-(void)setSystemProfile:(NSString *)arg1 ;
-(void)setConsoleLog:(NSString *)arg1 ;
-(void)setAllowToSendUserData:(char)arg1 ;
-(void)setWebReport:(NSDictionary *)arg1 ;
-(char)allowToSendUserData;
-(NSString *)consoleLog;
-(id)appVersion;
-(id)issueLog;
-(NSDictionary *)webReport;
-(NSString *)systemProfile;
-(void)setPreferences:(NSDictionary *)arg1 ;
-(void)dealloc;
-(NSDictionary *)preferences;
-(DMReport_ISSUES *)report;
-(void)setReport:(DMReport_ISSUES *)arg1 ;
-(id)appName;
@end

