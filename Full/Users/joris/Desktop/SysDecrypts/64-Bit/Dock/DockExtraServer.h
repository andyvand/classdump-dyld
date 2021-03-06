/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSMutableSet, NSURL, NSObject, ECStatusLabelDescription, NSArray;

@interface DockExtraServer : NSObject {

	NSMutableSet* _extras;
	id _identifier;
	NSURL* _url;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connection_queue;
	unsigned char _connection_uuid[16];
	char _hasMenu;
	double _lastConnectionAttempt;
	unsigned long long _reconnects;
	unsigned long long _reconnectTime;
	char _connecting;
	char _connected;
	char _connectionInvalid;
	ECStatusLabelDescription* _lastLabelDescription;
	id _lastCustomIcon;

}

@property (nonatomic,readonly) id identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char connected;                                          //@synthesize connected=_connected - In the implementation block
@property (nonatomic,readonly) unsigned long long clientCount; 
@property (nonatomic,readonly) NSArray * clients; 
@property (nonatomic,readonly) char hasMenu;                                            //@synthesize hasMenu=_hasMenu - In the implementation block
@property (nonatomic,readonly) ECStatusLabelDescription * lastStatusLabel;              //@synthesize lastLabelDescription=_lastLabelDescription - In the implementation block
@property (nonatomic,readonly) id lastCustomIcon;                                       //@synthesize lastCustomIcon=_lastCustomIcon - In the implementation block
+(void)initialize;
-(char)hasMenu;
-(id)initWithURL:(id)arg1 fileIdentifier:(id)arg2 ;
-(void)addExtraClient:(id)arg1 ;
-(void)removeExtraClient:(id)arg1 ;
-(void)scaleFactorChanged:(float)arg1 ;
-(id)getMenuArraySynchronous;
-(void)doMenuCommand:(unsigned long long)arg1 tag:(unsigned long long)arg2 modifiers:(unsigned long long)arg3 ;
-(void)_setLabelWithMessage:(id)arg1 ;
-(void)_setCustomIconMessage:(id)arg1 ;
-(void)_removeCustomIconMessage:(id)arg1 ;
-(id)lastCustomIcon;
-(ECStatusLabelDescription *)lastStatusLabel;
-(char)connected;
-(char)_connectIfNecessary;
-(void)_disconnect;
-(void)dealloc;
-(void)invalidate;
-(id)identifier;
-(unsigned long long)clientCount;
-(NSArray *)clients;
@end

