/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:43:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Audio MIDI Setup.app/Contents/MacOS/Audio MIDI Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Audio MIDI Setup/Audio MIDI Setup-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class MIDIEndpointWidget, MIDIDeviceLayer;

@interface MIDIPortLayer : CAShapeLayer {

	char selected;
	char connected;
	char midiReceived;
	char output;
	char deviceIsExternal;
	MIDIEndpointWidget* _widget;
	MIDIDeviceLayer* _owner;

}

@property (assign) MIDIEndpointWidget * widget;                   //@synthesize widget=_widget - In the implementation block
@property (assign) MIDIDeviceLayer * owner;                       //@synthesize owner=_owner - In the implementation block
@property (getter=isSelected) char selected; 
@property (getter=isConnected) char connected; 
@property (getter=isMidiReceived) char midiReceived; 
@property (readonly) int UID; 
@property (readonly) char deviceIsExternal; 
-(void)setMidiReceived:(char)arg1 ;
-(id)initWithEndpoint:(id)arg1 name:(id)arg2 ;
-(CGPoint)toolTipCenterLocation;
-(CGPathRef)createOutputPath;
-(CGPathRef)createInputPath;
-(char)isMidiReceived;
-(char)deviceIsExternal;
-(id)connectedDeviceLayers;
-(MIDIEndpointWidget *)widget;
-(void)setWidget:(MIDIEndpointWidget *)arg1 ;
-(void)setConnected:(char)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(char)isConnected;
-(CGPoint)location;
-(char)isSelected;
-(void)setOwner:(MIDIDeviceLayer *)arg1 ;
-(MIDIDeviceLayer *)owner;
-(void)setSelected:(char)arg1 ;
-(id)toolTipString;
-(int)UID;
@end
