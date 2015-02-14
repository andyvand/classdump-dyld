/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSUserInterfaceItemSearching;
@class NSString, NSMutableArray, NSObject;

@interface SCTResults : NSObject {

	NSString* identifier;
	unsigned long long sequenceNumber;
	NSMutableArray* values;
	NSObject*<NSUserInterfaceItemSearching> handler;

}

@property (retain) NSString * identifier; 
@property (assign) unsigned long long sequenceNumber; 
@property (retain) NSMutableArray * values; 
@property (retain) NSObject*<NSUserInterfaceItemSearching> handler; 
-(void)dealloc;
-(id)description;
-(NSMutableArray *)values;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setHandler:(NSObject*<NSUserInterfaceItemSearching>)arg1 ;
-(unsigned long long)sequenceNumber;
-(NSObject*<NSUserInterfaceItemSearching>)handler;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
@end

