/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKNodeDelegate;
@class NSString, PKNode;

@interface PKNodeProperties : NSObject {

	id<PKNodeDelegate> delegate;
	NSString* name;
	id deviceID;
	unsigned long long attributes;
	PKNode* parent;

}

@property (assign) id<PKNodeDelegate> delegate; 
@property (retain) NSString * name; 
@property (retain) id deviceID; 
@property (assign) unsigned long long attributes; 
@property (retain) PKNode * parent; 
-(void)setDelegate:(id<PKNodeDelegate>)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id<PKNodeDelegate>)delegate;
-(id)deviceID;
-(unsigned long long)attributes;
-(PKNode *)parent;
-(void)setParent:(PKNode *)arg1 ;
-(void)setAttributes:(unsigned long long)arg1 ;
-(void)setDeviceID:(id)arg1 ;
@end

