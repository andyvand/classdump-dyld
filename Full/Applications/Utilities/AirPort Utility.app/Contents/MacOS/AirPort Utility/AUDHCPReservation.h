/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPort Utility/AirPort Utility-Structs.h>
#import <AirPort Utility/AUSubproperty.h>

@class NSString, NSArray;

@interface AUDHCPReservation : AUSubproperty {

	NSString* description;
	long long reservationType;
	NSArray* reservationTypeValues;
	NSString* clientID;
	NSString* macAddress;
	NSString* ipAddress;
	char beingObserved;

}

@property (nonatomic,retain) NSString * description; 
@property (assign,nonatomic) long long reservationType; 
@property (nonatomic,retain) NSArray * reservationTypeValues; 
@property (nonatomic,retain) NSString * clientID; 
@property (nonatomic,retain) NSString * macAddress; 
@property (nonatomic,retain) NSString * ipAddress; 
@property (assign,nonatomic) char beingObserved; 
-(id)saveData;
-(char)beingObserved;
-(void)setBeingObserved:(char)arg1 ;
-(void)setMacAddress:(NSString *)arg1 ;
-(NSString *)macAddress;
-(void)setReservationType:(long long)arg1 ;
-(void)setReservationTypeValues:(NSArray *)arg1 ;
-(id)findFirstAvailableDHCPReservation;
-(long long)reservationType;
-(NSArray *)reservationTypeValues;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(void)setIpAddress:(NSString *)arg1 ;
-(NSString *)ipAddress;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isValid;
-(void)setDescription:(NSString *)arg1 ;
@end

