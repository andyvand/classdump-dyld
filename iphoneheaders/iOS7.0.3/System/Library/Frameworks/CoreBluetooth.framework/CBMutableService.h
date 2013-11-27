/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBService.h>

@class NSNumber, CBUUID, NSArray;

@interface CBMutableService : CBService {

	NSNumber* _ID;

}

@property (nonatomic,retain) CBUUID * UUID; 
@property (assign,nonatomic) BOOL isPrimary; 
@property (retain) NSArray * includedServices; 
@property (retain) NSArray * characteristics; 
@property (retain) NSNumber * ID;                           //@synthesize ID=_ID - In the implementation block
-(id)initWithType:(id)arg1 primary:(BOOL)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)ID;
-(void)setID:(id)arg1 ;
-(void)setCharacteristics:(id)arg1 ;
@end
