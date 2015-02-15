/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface IOBluetoothDeviceInquiryExpansion : NSObject {

	NSArray* _searchUUIDs;
	int searchType;
	char joinedToDaemon;
	char rssiThreshold;

}

@property (copy) NSArray * searchUUIDs;              //@synthesize searchUUIDs=_searchUUIDs - In the implementation block
@property (assign) int searchType; 
@property (assign) char joinedToDaemon; 
@property (assign) char rssiThreshold; 
-(void)setSearchUUIDs:(NSArray *)arg1 ;
-(NSArray *)searchUUIDs;
-(int)searchType;
-(void)setSearchType:(int)arg1 ;
-(char)joinedToDaemon;
-(void)setJoinedToDaemon:(char)arg1 ;
-(char)rssiThreshold;
-(void)setRssiThreshold:(char)arg1 ;
-(void)dealloc;
@end

