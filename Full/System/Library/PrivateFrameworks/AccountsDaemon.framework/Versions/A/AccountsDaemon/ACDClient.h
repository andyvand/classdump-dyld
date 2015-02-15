/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSXPCConnection, ACDDatabase, NSString, NSNumber, NSMutableDictionary;

@interface ACDClient : NSObject {

	NSXPCConnection* _connection;
	ACDDatabase* _database;
	CFBundleRef _bundle;
	NSString* _bundleID;
	char _didManuallySetBundleID;
	NSNumber* _pid;
	NSString* _localizedAppName;
	NSString* _name;
	NSMutableDictionary* _entitlementChecks;

}

@property (retain) NSString * bundleID; 
@property (readonly) CFBundleRef bundle; 
@property (readonly) NSString * localizedAppName; 
@property (readonly) NSString * adamOrDisplayID; 
@property (readonly) NSString * name; 
@property (readonly) NSNumber * pid; 
@property (readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) ACDDatabase * database;                    //@synthesize database=_database - In the implementation block
+(id)clientWithBundleID:(id)arg1 ;
+(id)bundleForPID:(int)arg1 ;
-(NSString *)bundleID;
-(ACDDatabase *)database;
-(char)hasEntitlement:(id)arg1 ;
-(NSString *)adamOrDisplayID;
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(NSString *)localizedAppName;
-(id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1 ;
-(id)shortDebugDescription;
-(id)longDebugDescription;
-(NSNumber *)pid;
-(NSXPCConnection *)connection;
-(CFBundleRef)bundle;
-(id)initWithConnection:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(void)setBundleID:(NSString *)arg1 ;
@end

