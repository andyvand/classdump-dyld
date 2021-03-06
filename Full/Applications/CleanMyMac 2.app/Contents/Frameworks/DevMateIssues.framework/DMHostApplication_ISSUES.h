/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateIssues.framework/DevMateIssues
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DevMateIssues/NSCoding.h>

@class NSString, NSURL;

@interface DMHostApplication_ISSUES : NSObject <NSCoding> {

	NSString* _path;
	NSString* _name;
	NSString* _bundleID;
	NSString* _version;
	NSString* _iconPath;
	NSString* _executablePath;

}

@property (nonatomic,retain) NSURL * sparkleFeedURL; 
@property (nonatomic,retain) NSURL * updateURL; 
@property (nonatomic,copy) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * version;                     //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * iconPath;                    //@synthesize iconPath=_iconPath - In the implementation block
@property (nonatomic,retain) NSString * executablePath;              //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,retain) NSString * prefsUserEmail; 
@property (nonatomic,retain) NSString * prefsUserName; 
+(void)load;
-(void)appcast:(id)arg1 failedToLoadWithError:(id)arg2 ;
-(void)appcastDidFinishLoading:(id)arg1 ;
-(void)setSparkleFeedURL:(NSURL *)arg1 ;
-(void)setUpdateURL:(NSURL *)arg1 ;
-(NSURL *)sparkleFeedURL;
-(NSURL *)updateURL;
-(void)checkIfLatestVersion;
-(void)loadInfo_SparkleExtension;
-(void)showNewVersionAvailableAlertWithVersion:(id)arg1 ;
-(char)isItemNewer:(id)arg1 ;
-(void)loadInfo;
-(void)setExecutablePath:(NSString *)arg1 ;
-(NSString *)prefsUserEmail;
-(void)setPrefsUserEmail:(NSString *)arg1 ;
-(NSString *)prefsUserName;
-(void)setPrefsUserName:(NSString *)arg1 ;
-(NSString *)iconPath;
-(NSString *)bundleID;
-(void)setIconPath:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)executablePath;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)version;
-(void)setBundleID:(NSString *)arg1 ;
@end

