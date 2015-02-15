/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:29:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /opt/X11/bin/quartz-wm
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <quartz-wm/quartz-wm-Structs.h>
@class x_screen, NSString;

@interface x_window : NSObject {

	unsigned long long _id;
	unsigned long long _frame_id;
	unsigned long long _group_id;
	pixman_rectangle32 _current_frame;
	unsigned long long _tracking_id;
	pixman_rectangle32 _tracking_rect;
	unsigned long long _growbox_id;
	pixman_rectangle32 _growbox_rect;
	x_screen* _screen;
	SCD_Struct_x_4* _xattr;
	int _frame_attr;
	int _frame_title_height;
	int _level;
	unsigned _reparented : 1;
	unsigned _shaped : 1;
	unsigned _shaped_empty : 1;
	unsigned _removed : 1;
	unsigned _deleted : 1;
	unsigned _focused : 1;
	unsigned _minimized : 1;
	unsigned _unmapped : 1;
	unsigned _always_click_through : 1;
	unsigned _movable : 1;
	unsigned _shadable : 1;
	NSString* _title;
	int _shortcut_index;
	unsigned _set_shape : 1;
	unsigned _decorated : 1;
	unsigned _fullscreen : 1;
	unsigned _resizable : 1;
	unsigned _animating : 1;
	unsigned _shaded : 1;
	unsigned _hidden : 1;
	unsigned _client_unmapped : 1;
	unsigned _does_wm_take_focus : 1;
	unsigned _does_wm_delete_window : 1;
	unsigned _pending_frame_change : 1;
	unsigned _queued_frame_change : 1;
	unsigned _has_unzoomed_frame : 1;
	unsigned _pending_decorate : 1;
	unsigned _resizing_title : 1;
	unsigned _needs_configure_notify : 1;
	unsigned _modal : 1;
	unsigned _in_window_menu : 1;
	unsigned _pending_raise : 1;
	int _frame_height;
	pixman_rectangle32 _pending_frame;
	pixman_rectangle32 _queued_frame;
	pixman_rectangle32 _unzoomed_frame;
	SCD_Struct_x_5* _wm_hints;
	SCD_Struct_x_7 _size_hints;
	long long _size_hints_supplied;
	int _frame_decor;
	int _frame_behavior;
	unsigned long long* _colormap_windows;
	int _n_colormap_windows;
	int _drawn_frame_decor;
	unsigned _osx_id;
	unsigned _minimized_osx_id;
	unsigned long long _transient_for_id;
	x_window* _transient_for;
	x_list_struct* _transients;

}
-(unsigned)get_osx_id;
-(void)do_uncollapse_and_tell_dock:(char)arg1 ;
-(void)uncollapse_finished:(char)arg1 ;
-(void)collapse_finished:(char)arg1 ;
-(void)ungrab_events;
-(void)grab_events;
-(void)set_is_active:(char)arg1 ;
-(void)update_state:(id)arg1 ;
-(void)error_shutdown;
-(void)do_unshade:(unsigned long long)arg1 ;
-(void)update_net_wm_action_property;
-(void)do_collapse;
-(void)do_zoom;
-(void)do_close:(unsigned long long)arg1 ;
-(void)do_hide;
-(void)update_shape;
-(void)install_colormaps;
-(void)expose;
-(char)focus:(unsigned long long)arg1 ;
-(void)do_net_wm_state_change:(int)arg1 atom:(unsigned long long)arg2 ;
-(void)property_changed:(unsigned long long)arg1 ;
-(void)report_frame_size:(pixman_rectangle32)arg1 ;
-(void)validate_position;
-(void)resize_client:(pixman_rectangle32)arg1 ;
-(void)decorate;
-(char)focus:(unsigned long long)arg1 raise:(char)arg2 ;
-(void)x_focus_in;
-(void)x_focus_out;
-(void)remove_resizing_title;
-(void)resize_frame:(pixman_rectangle32)arg1 ;
-(pixman_rectangle32)validate_frame_rect:(pixman_rectangle32)arg1 from_user:(char)arg2 ;
-(void)set_resizing_title:(pixman_rectangle32)arg1 ;
-(unsigned)hit_test_frame:(SCD_Struct_x_6)arg1 ;
-(void)do_toggle_shaded:(unsigned long long)arg1 ;
-(unsigned long long)toplevel_id;
-(id)init_with_id:(unsigned long long)arg1 screen:(id)arg2 initializing:(char)arg3 ;
-(void)reparent_out;
-(void)do_unhide;
-(void)map_unmap_client;
-(void)do_uncollapse_and_tell_dock:(char)arg1 with_animation:(char)arg2 ;
-(pixman_rectangle32)frame_inner_rect:(pixman_rectangle32)arg1 ;
-(x_list_struct*)window_group;
-(pixman_rectangle32)validate_frame_rect:(pixman_rectangle32)arg1 from_user:(char)arg2 constrain:(char)arg3 ;
-(void)update_shaped;
-(void)update_wm_name;
-(void)update_parent;
-(void)update_wm_hints;
-(void)update_group;
-(void)update_colormaps;
-(void)update_wm_protocols;
-(void)update_frame;
-(pixman_rectangle32)construct_frame_from_winrect:(pixman_rectangle32)arg1 ;
-(void)reparent_in;
-(void)place_window;
-(void)set_wm_state:(int)arg1 ;
-(void)send_configure;
-(void)update_net_wm_state_property;
-(void)update_shape:(pixman_rectangle32)arg1 ;
-(void)decorate_rect:(pixman_rectangle32)arg1 ;
-(void)do_resize:(pixman_rectangle32)arg1 ;
-(void)resize_frame:(pixman_rectangle32)arg1 force:(char)arg2 ;
-(pixman_rectangle32)client_rect:(pixman_rectangle32)arg1 ;
-(pixman_rectangle32)validate_frame_rect:(pixman_rectangle32)arg1 ;
-(int)get_xp_frame_class;
-(void)update_inner_windows:(char)arg1 outer:(pixman_rectangle32)arg2 inner:(pixman_rectangle32)arg3 ;
-(pixman_rectangle32)frame_outer_rect;
-(char)has_modal_descendents;
-(id)resizing_title;
-(void)do_fullscreen:(char)arg1 ;
-(void)do_maximize;
-(void)do_shade:(unsigned long long)arg1 ;
-(char)is_maximized;
-(void)update_size_hints;
-(void)update_motif_hints;
-(void)update_net_wm_type_hints;
-(void)update_net_wm_state_hints;
-(char)focus:(unsigned long long)arg1 raise:(char)arg2 force:(char)arg3 ;
-(x_list_struct*)transient_group;
-(char)my_dialog:(id)arg1 ;
-(pixman_rectangle32)intended_frame;
-(SCD_Struct_x_6)validate_window_size:(pixman_rectangle32)arg1 from_user:(char)arg2 constrain:(char)arg3 ;
-(SCD_Struct_x_6)validate_window_size:(pixman_rectangle32)arg1 ;
-(void)do_uncollapse;
-(pixman_rectangle32)validate_client_rect:(pixman_rectangle32)arg1 ;
-(void)dealloc;
-(id)description;
-(void)raise;
-(id)title;
-(void)activate:(unsigned long long)arg1 ;
-(void)show;
@end
