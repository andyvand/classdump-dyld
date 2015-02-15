/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMSystemEventsItem.h>

@class NSString;

@interface _AMSystemEventsInterface : _AMSystemEventsItem

@property (assign) char automatic; 
@property (copy) NSString * duplex; 
@property (copy,readonly) NSString * kind; 
@property (copy,readonly) NSString * MACAddress; 
@property (assign) long long mtu; 
@property (copy,readonly) NSString * name; 
@property (assign) long long speed; 
-(id)id;
-(char)automatic;
-(void)setAutomatic:(char)arg1 ;
-(NSString *)duplex;
-(void)setDuplex:(NSString *)arg1 ;
-(NSString *)MACAddress;
-(long long)mtu;
-(void)setMtu:(long long)arg1 ;
-(void)setSpeed:(long long)arg1 ;
-(long long)speed;
-(NSString *)name;
-(NSString *)kind;
@end

