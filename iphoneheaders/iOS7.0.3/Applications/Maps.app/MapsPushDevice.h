/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/mapspushd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class IDSDevice, NSData, NSString;

@interface MapsPushDevice : NSObject {

	IDSDevice* _device;
	NSData* pushToken;

}

@property (readonly) NSString * name; 
@property (readonly) NSString * model; 
@property (nonatomic,readonly) IDSDevice * device;              //@synthesize device=_device - In the implementation block
@property (getter=isFake,readonly) BOOL fake; 
-(id)initWithIDSDevice:(id)arg1 ;
-(BOOL)isFake;
-(void)dealloc;
-(id)name;
-(id)model;
-(id)device;
@end
