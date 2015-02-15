-[CBCentralManager sendMsg:args:]
-[CBCentralManager sendSyncMsg:args:]
-[CBCentralManager peripheralWillBeReleased:]
-[CBCentralManager peripheralForUUID:args:]
-[CBCentralManager orphanPeripherals]
___37-[CBCentralManager orphanPeripherals]_block_invoke
-[CBCentralManager dataArrayToUUIDArray:]
-[CBCentralManager dealloc]
-[CBCentralManager initWithDelegate:queue:]
-[CBCentralManager initWithDelegate:queue:options:]
-[CBCentralManager retrievePeripherals:]
-[CBCentralManager retrievePeripheralsWithIdentifiers:]
-[CBCentralManager retrieveConnectedPeripherals]
-[CBCentralManager retrieveConnectedPeripheralsWithServices:]
-[CBCentralManager retrieveConnectedPeripheralsWithServices:allowAll:]
-[CBCentralManager retrievePairedPeripherals]
-[CBCentralManager scanForPeripheralsWithServices:options:]
-[CBCentralManager stopScan]
-[CBCentralManager connectPeripheral:options:]
-[CBCentralManager cancelPeripheralConnection:]
-[CBCentralManager cancelPeripheralConnection:force:]
-[CBCentralManager setDesiredConnectionLatency:forPeripheral:]
-[CBCentralManager startTrackingPeripheral:options:]
-[CBCentralManager stopTrackingPeripheral:options:]
-[CBCentralManager handleStateUpdated:]
___39-[CBCentralManager handleStateUpdated:]_block_invoke
-[CBCentralManager handleRestoringState:]
-[CBCentralManager handlePeripheralsRetrieved:]
-[CBCentralManager handleConnectedPeripheralsRetrieved:]
-[CBCentralManager handlePeripheralDiscovered:]
-[CBCentralManager handlePeripheralConnectionCompleted:]
-[CBCentralManager handlePeripheralDisconnectionCompleted:]
-[CBCentralManager handlePeripheralConnectionStateUpdated:]
-[CBCentralManager handlePeripheralTrackingUpdated:]
-[CBCentralManager handleZoneLost:]
-[CBCentralManager handleConnectionParametersUpdated:]
-[CBCentralManager handleMtuChanged:]
-[CBCentralManager handlePeripheralMsg:args:]
-[CBCentralManager xpcConnection:didReceiveMsg:args:]
-[CBCentralManager xpcConnectionIsInvalid:]
-[CBCentralManager xpcConnectionDidReset:]
-[CBCentralManager delegate]
-[CBCentralManager setDelegate:]
-[CBCentralManager state]
-[CBCharacteristic initWithService:dictionary:]
-[CBCharacteristic dealloc]
-[CBCharacteristic invalidate]
-[CBCharacteristic handleValueUpdated:]
-[CBCharacteristic handleValueWritten:]
-[CBCharacteristic handleValueBroadcasted:]
-[CBCharacteristic handleValueNotifying:]
-[CBCharacteristic handleDescriptorsDiscovered:]
-[CBCharacteristic service]
-[CBCharacteristic setService:]
-[CBCharacteristic UUID]
-[CBCharacteristic properties]
-[CBCharacteristic value]
-[CBCharacteristic setValue:]
-[CBCharacteristic descriptors]
-[CBCharacteristic setDescriptors:]
-[CBCharacteristic isBroadcasted]
-[CBCharacteristic isNotifying]
-[CBCharacteristic setIsNotifying:]
-[CBCharacteristic peripheral]
-[CBCharacteristic handle]
-[CBCharacteristic valueHandle]
-[CBMutableCharacteristic initWithType:properties:value:permissions:]
-[CBMutableCharacteristic initWithService:dictionary:]
-[CBMutableCharacteristic dealloc]
-[CBMutableCharacteristic setUUID:]
-[CBMutableCharacteristic UUID]
-[CBMutableCharacteristic setValue:]
-[CBMutableCharacteristic value]
-[CBMutableCharacteristic descriptors]
-[CBMutableCharacteristic properties]
-[CBMutableCharacteristic handleCentralSubscribed:]
-[CBMutableCharacteristic handleCentralUnsubscribed:]
-[CBMutableCharacteristic description]
-[CBMutableCharacteristic setProperties:]
-[CBMutableCharacteristic setDescriptors:]
-[CBMutableCharacteristic permissions]
-[CBMutableCharacteristic setPermissions:]
-[CBMutableCharacteristic subscribedCentrals]
-[CBMutableCharacteristic ID]
-[CBMutableCharacteristic setID:]
-[CBDescriptor initWithCharacteristic:dictionary:]
-[CBDescriptor dealloc]
-[CBDescriptor invalidate]
-[CBDescriptor handleValueUpdated:]
-[CBDescriptor handleValueWritten:]
-[CBDescriptor characteristic]
-[CBDescriptor setCharacteristic:]
-[CBDescriptor UUID]
-[CBDescriptor value]
-[CBDescriptor setValue:]
-[CBDescriptor peripheral]
-[CBDescriptor handle]
-[CBMutableDescriptor initWithType:value:]
-[CBMutableDescriptor initWithCharacteristic:dictionary:]
-[CBMutableDescriptor dealloc]
-[CBMutableDescriptor ID]
-[CBMutableDescriptor setID:]
-[CBPeripheral initWithCentralManager:dictionary:]
-[CBPeripheral release]
-[CBPeripheral dealloc]
-[CBPeripheral copyWithZone:]
-[CBPeripheral description]
-[CBPeripheral sendMsg:args:]
-[CBPeripheral sendMsg:requiresConnected:args:]
-[CBPeripheral sendSyncMsg:args:]
-[CBPeripheral handleMsg:args:]
-[CBPeripheral attributeForHandle:]
-[CBPeripheral setAttribute:forHandle:]
-[CBPeripheral removeAttributeForHandle:]
-[CBPeripheral invalidateAllAttributes]
-[CBPeripheral handleConnection:]
-[CBPeripheral handleDisconnection]
-[CBPeripheral handleConnectionStateUpdated:]
-[CBPeripheral setOrphan]
-[CBPeripheral isConnected]
-[CBPeripheral readRSSI]
-[CBPeripheral discoverServices:]
-[CBPeripheral discoverIncludedServices:forService:]
-[CBPeripheral discoverCharacteristics:forService:]
-[CBPeripheral readValueForCharacteristic:]
-[CBPeripheral writeValue:forCharacteristic:type:]
-[CBPeripheral reliablyWriteValues:forCharacteristics:]
-[CBPeripheral setBroadcastValue:forCharacteristic:]
-[CBPeripheral setNotifyValue:forCharacteristic:]
-[CBPeripheral discoverDescriptorsForCharacteristic:]
-[CBPeripheral readValueForDescriptor:]
-[CBPeripheral writeValue:forDescriptor:]
-[CBPeripheral pair]
-[CBPeripheral acceptPairing:ofType:withPasskey:]
-[CBPeripheral unpair]
-[CBPeripheral tag:]
-[CBPeripheral untag:]
-[CBPeripheral hasTag:]
-[CBPeripheral handleNameUpdated:]
-[CBPeripheral handleServicesChanged:]
-[CBPeripheral handleRSSIUpdated:]
-[CBPeripheral handleWritesExecuted:]
-[CBPeripheral handleServicesDiscovered:]
-[CBPeripheral handlePairingRequested:]
-[CBPeripheral handlePairingCompleted:]
-[CBPeripheral handleUnpaired:]
-[CBPeripheral handleAttributeEvent:args:attributeSelector:delegateSelector:]
-[CBPeripheral handleServiceEvent:serviceSelector:delegateSelector:]
-[CBPeripheral handleCharacteristicEvent:characteristicSelector:delegateSelector:]
-[CBPeripheral handleDescriptorEvent:descriptorSelector:delegateSelector:]
-[CBPeripheral handleServiceIncludedServicesDiscovered:]
-[CBPeripheral handleServiceCharacteristicsDiscovered:]
-[CBPeripheral handleCharacteristicValueUpdated:]
-[CBPeripheral handleCharacteristicValueWritten:]
-[CBPeripheral handleCharacteristicValueNotifying:]
-[CBPeripheral handleCharacteristicDescriptorsDiscovered:]
-[CBPeripheral handleDescriptorValueUpdated:]
-[CBPeripheral handleDescriptorValueWritten:]
-[CBPeripheral delegate]
-[CBPeripheral setDelegate:]
-[CBPeripheral UUID]
-[CBPeripheral identifier]
-[CBPeripheral name]
-[CBPeripheral setName:]
-[CBPeripheral RSSI]
-[CBPeripheral setRSSI:]
-[CBPeripheral state]
-[CBPeripheral setState:]
-[CBPeripheral services]
-[CBPeripheral setServices:]
-[CBPeripheral isPaired]
-[CBPeripheral isConnectedToSystem]
-[CBPeripheral mtuLength]
-[CBPeripheral setMtuLength:]
-[CBService initWithPeripheral:dictionary:]
-[CBService dealloc]
-[CBService invalidate]
-[CBService handleIncludedServicesDiscovered:]
-[CBService handleCharacteristicsDiscovered:]
-[CBService peripheral]
-[CBService UUID]
-[CBService isPrimary]
-[CBService includedServices]
-[CBService setIncludedServices:]
-[CBService characteristics]
-[CBService setCharacteristics:]
-[CBService startHandle]
-[CBService endHandle]
-[CBMutableService initWithType:primary:]
-[CBMutableService initWithDictionary:]
-[CBMutableService setUUID:]
-[CBMutableService UUID]
-[CBMutableService setIsPrimary:]
-[CBMutableService isPrimary]
-[CBMutableService setIncludedServices:]
-[CBMutableService includedServices]
-[CBMutableService characteristics]
-[CBMutableService dealloc]
-[CBMutableService description]
-[CBMutableService setCharacteristics:]
-[CBMutableService ID]
-[CBMutableService setID:]
-[CBUUID initWithString:]
-[CBUUID initWithData:]
-[CBUUID initWithCFUUID:]
-[CBUUID initWithNSUUID:]
+[CBUUID UUIDWithString:]
+[CBUUID UUIDWithData:]
+[CBUUID UUIDWithCFUUID:]
+[CBUUID UUIDWithNSUUID:]
-[CBUUID dealloc]
-[CBUUID copyWithZone:]
-[CBUUID data]
-[CBUUID UUIDString]
-[CBUUID isEqual:]
-[CBUUID hash]
-[CBUUID description]
-[CBATTRequest initWithCentral:characteristic:offset:value:transactionID:]
-[CBATTRequest dealloc]
-[CBATTRequest description]
-[CBATTRequest central]
-[CBATTRequest setCentral:]
-[CBATTRequest characteristic]
-[CBATTRequest setCharacteristic:]
-[CBATTRequest offset]
-[CBATTRequest setOffset:]
-[CBATTRequest value]
-[CBATTRequest setValue:]
-[CBATTRequest transactionID]
-[CBATTRequest setTransactionID:]
-[CBATTRequest ignoreResponse]
-[CBATTRequest setIgnoreResponse:]
-[CBCentral initWithUUID:]
-[CBCentral dealloc]
-[CBCentral copyWithZone:]
-[CBCentral description]
-[CBCentral setMaximumUpdateValueLength:]
-[CBCentral UUID]
-[CBCentral identifier]
-[CBCentral maximumUpdateValueLength]
+[CBPeripheralManager authorizationStatus]
-[CBPeripheralManager initWithDelegate:queue:]
-[CBPeripheralManager initWithDelegate:queue:options:]
-[CBPeripheralManager dealloc]
-[CBPeripheralManager setDesiredConnectionLatency:forCentral:]
-[CBPeripheralManager startAdvertising:]
-[CBPeripheralManager stopAdvertising]
-[CBPeripheralManager addService:]
-[CBPeripheralManager removeService:]
___37-[CBPeripheralManager removeService:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CBPeripheralManager removeAllServices]
-[CBPeripheralManager respondToRequest:withResult:]
-[CBPeripheralManager updateValue:forCharacteristic:onSubscribedCentrals:]
-[CBPeripheralManager sendMsg:args:]
-[CBPeripheralManager centralFromArgs:]
-[CBPeripheralManager handleStateUpdated:]
___42-[CBPeripheralManager handleStateUpdated:]_block_invoke
-[CBPeripheralManager handleRestoringState:]
-[CBPeripheralManager handleServiceAdded:]
___42-[CBPeripheralManager handleServiceAdded:]_block_invoke
___copy_helper_block_175
___destroy_helper_block_176
-[CBPeripheralManager handleGetAttributeValue:]
-[CBPeripheralManager handleSetAttributeValues:]
-[CBPeripheralManager handleNotificationAdded:]
-[CBPeripheralManager handleNotificationRemoved:]
-[CBPeripheralManager handleAdvertisingStarted:]
-[CBPeripheralManager handleAdvertisingStopped:]
-[CBPeripheralManager handleReadyForUpdates:]
-[CBPeripheralManager handleMTUChanged:]
-[CBPeripheralManager handleConnectionParametersUpdated:]
-[CBPeripheralManager xpcConnection:didReceiveMsg:args:]
-[CBPeripheralManager xpcConnectionIsInvalid:]
-[CBPeripheralManager xpcConnectionDidReset:]
-[CBPeripheralManager delegate]
-[CBPeripheralManager setDelegate:]
-[CBPeripheralManager state]
-[CBPeripheralManager isAdvertising]
-[CBXpcConnection initWithDelegate:queue:options:sessionType:]
___62-[CBXpcConnection initWithDelegate:queue:options:sessionType:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___62-[CBXpcConnection initWithDelegate:queue:options:sessionType:]_block_invoke18
___copy_helper_block_25
___destroy_helper_block_26
-[CBXpcConnection dealloc]
-[CBXpcConnection bluetoothExists]
-[CBXpcConnection disconnect]
-[CBXpcConnection isMainQueue]
-[CBXpcConnection checkIn]
-[CBXpcConnection checkOut]
-[CBXpcConnection allocXpcMsg:args:]
-[CBXpcConnection sendAsyncMsg:args:]
-[CBXpcConnection sendMsg:args:]
___32-[CBXpcConnection sendMsg:args:]_block_invoke
___copy_helper_block_66
___destroy_helper_block_67
-[CBXpcConnection sendSyncMsg:args:]
-[CBXpcConnection handleMsg:args:]
___34-[CBXpcConnection handleMsg:args:]_block_invoke
___copy_helper_block_74
___destroy_helper_block_75
-[CBXpcConnection handleReset]
___30-[CBXpcConnection handleReset]_block_invoke
___copy_helper_block_80
___destroy_helper_block_81
-[CBXpcConnection handleInvalid]
___32-[CBXpcConnection handleInvalid]_block_invoke
___copy_helper_block_84
___destroy_helper_block_85
-[CBXpcConnection handleConnectionEvent:]
-[CBXpcConnection allocXpcObjectWithNSObject:]
-[CBXpcConnection allocXpcArrayWithNSArray:]
-[CBXpcConnection allocXpcDictionaryWithNSDictionary:]
-[CBXpcConnection nsObjectWithXpcObject:]
-[CBXpcConnection nsArrayWithXpcArray:]
___39-[CBXpcConnection nsArrayWithXpcArray:]_block_invoke
___copy_helper_block_161
___destroy_helper_block_162
-[CBXpcConnection nsDictionaryFromXpcDictionary:]
___49-[CBXpcConnection nsDictionaryFromXpcDictionary:]_block_invoke
___copy_helper_block_170
___destroy_helper_block_171
-[CBXpcConnection delegate]
-[CBXpcConnection setDelegate:]
+[NSError(CoreBluetooth) errorWithBTResult:]
GCC_except_table2
GCC_except_table3
GCC_except_table4
GCC_except_table24
GCC_except_table12
GCC_except_table37
GCC_except_table40
GCC_except_table44
GCC_except_table7
GCC_except_table8
GCC_except_table12
GCC_except_table16
GCC_except_table17
GCC_except_table20
GCC_except_table24
GCC_except_table25
GCC_except_table26
GCC_except_table27
GCC_except_table35
-[CBUUID initWithData:].uuidBytes123
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp129
___block_literal_global130
_CBUUIDDescriptions
___block_descriptor_tmp
___block_descriptor_tmp167
___block_literal_global
___block_descriptor_tmp178
___block_descriptor_tmp
___block_descriptor_tmp29
-[CBXpcConnection allocXpcMsg:args:].keys
___block_descriptor_tmp69
___block_descriptor_tmp77
___block_descriptor_tmp83
___block_descriptor_tmp87
___block_descriptor_tmp165
___block_descriptor_tmp174
_OBJC_IVAR_$_CBCentralManager._state
_OBJC_IVAR_$_CBCentralManager._connection
_OBJC_IVAR_$_CBCentralManager._peripherals
_OBJC_IVAR_$_CBCentralManager._delegate
_OBJC_IVAR_$_CBCentralManager._isScanning
_OBJC_IVAR_$_CBMutableCharacteristic._permissions
_OBJC_IVAR_$_CBMutableCharacteristic._subscribedCentrals
_OBJC_IVAR_$_CBMutableCharacteristic._ID
_OBJC_IVAR_$_CBMutableDescriptor._ID
_OBJC_IVAR_$_CBPeripheral._delegate
_OBJC_IVAR_$_CBPeripheral._UUID
_OBJC_IVAR_$_CBPeripheral._identifier
_OBJC_IVAR_$_CBPeripheral._name
_OBJC_IVAR_$_CBPeripheral._RSSI
_OBJC_IVAR_$_CBPeripheral._state
_OBJC_IVAR_$_CBPeripheral._services
_OBJC_IVAR_$_CBPeripheral._centralManager
_OBJC_IVAR_$_CBPeripheral._attributes
_OBJC_IVAR_$_CBPeripheral._isPaired
_OBJC_IVAR_$_CBPeripheral._isConnectedToSystem
_OBJC_IVAR_$_CBPeripheral.mtuLength
_OBJC_IVAR_$_CBMutableService._ID
_OBJC_IVAR_$_CBUUID._data
_OBJC_IVAR_$_CBUUID._range
_OBJC_IVAR_$_CBATTRequest._central
_OBJC_IVAR_$_CBATTRequest._characteristic
_OBJC_IVAR_$_CBATTRequest._offset
_OBJC_IVAR_$_CBATTRequest._value
_OBJC_IVAR_$_CBATTRequest._transactionID
_OBJC_IVAR_$_CBATTRequest._ignoreResponse
_OBJC_IVAR_$_CBCentral._UUID
_OBJC_IVAR_$_CBCentral._identifier
_OBJC_IVAR_$_CBCentral._maximumUpdateValueLength
_OBJC_IVAR_$_CBPeripheralManager._delegate
_OBJC_IVAR_$_CBPeripheralManager._state
_OBJC_IVAR_$_CBPeripheralManager._centrals
_OBJC_IVAR_$_CBPeripheralManager._services
_OBJC_IVAR_$_CBPeripheralManager._characteristicIDs
_OBJC_IVAR_$_CBPeripheralManager._updateLock
_OBJC_IVAR_$_CBPeripheralManager._readyForUpdates
_OBJC_IVAR_$_CBPeripheralManager._connection
_OBJC_IVAR_$_CBPeripheralManager._waitingForReady
_OBJC_IVAR_$_CBPeripheralManager._advertising
_s_AttributeID
_CBATTErrorDomain
_CBAdvertisementDataAppleBeaconKey
_CBAdvertisementDataAppleMfgData
_CBAdvertisementDataChannel
_CBAdvertisementDataIsConnectable
_CBAdvertisementDataLocalNameKey
_CBAdvertisementDataManufacturerDataKey
_CBAdvertisementDataOverflowServiceUUIDsKey
_CBAdvertisementDataSaturated
_CBAdvertisementDataServiceDataKey
_CBAdvertisementDataServiceUUIDsKey
_CBAdvertisementDataSolicitedServiceUUIDsKey
_CBAdvertisementDataTxPowerLevelKey
_CBAdvertisementDataWlanOn
_CBCentralManagerOptionReceiveSystemEvents
_CBCentralManagerOptionRestoreIdentifierKey
_CBCentralManagerOptionShowPowerAlertKey
_CBCentralManagerRestoredStatePeripheralsKey
_CBCentralManagerRestoredStateScanOptionsKey
_CBCentralManagerRestoredStateScanServicesKey
_CBCentralManagerScanOptionActive
_CBCentralManagerScanOptionAllowDuplicatesKey
_CBCentralManagerScanOptionIsPrivilegedDaemonKey
_CBCentralManagerScanOptionMatchingRuleKey
_CBCentralManagerScanOptionMatchingRuleMaskKey
_CBCentralManagerScanOptionMatchingRulePayloadKey
_CBCentralManagerScanOptionMatchingRuleRSSIKey
_CBCentralManagerScanOptionMatchingRuleTypeKey
_CBCentralManagerScanOptionScanInterval
_CBCentralManagerScanOptionScanWindow
_CBCentralManagerScanOptionSolicitedServiceUUIDsKey
_CBCentralManagerScanOptionZonesKey
_CBCentralManagerTrackingOptionType
_CBConnectPeripheralOptionNotifyOnConnectionKey
_CBConnectPeripheralOptionNotifyOnDisconnectionKey
_CBConnectPeripheralOptionNotifyOnNotificationKey
_CBErrorDomain
_CBPeripheralManagerOptionRestoreIdentifierKey
_CBPeripheralManagerOptionShowPowerAlertKey
_CBPeripheralManagerRestoredStateAdvertisementDataKey
_CBPeripheralManagerRestoredStateServicesKey
_CBUUIDAlertNotificationControlPoint
_CBUUIDAlertNotificationServiceString
_CBUUIDAppearanceString
_CBUUIDBatteryLevelCharacteristicString
_CBUUIDBatteryServiceString
_CBUUIDBootKeyboardInputReportCharacteristicString
_CBUUIDBootKeyboardOutputReportCharacteristicString
_CBUUIDBootMouseInputReportCharacteristicString
_CBUUIDCharacteristicAggregateFormatString
_CBUUIDCharacteristicExtendedPropertiesString
_CBUUIDCharacteristicFormatString
_CBUUIDCharacteristicUserDescriptionString
_CBUUIDClientCharacteristicConfigurationString
_CBUUIDCurrentTimeCharacteristicString
_CBUUIDCurrentTimeServiceString
_CBUUIDDeviceInformationServiceString
_CBUUIDDeviceNameString
_CBUUIDFirmwareRevisionStringCharacteristicString
_CBUUIDGenericAccessProfileString
_CBUUIDGenericAttributeProfileString
_CBUUIDHIDControlPointCharacteristicString
_CBUUIDHIDInformationCharacteristicString
_CBUUIDHardwareRevisionStringCharacteristicString
_CBUUIDHumanInterfaceDeviceServiceString
_CBUUIDIEEERegulatoryCertificationDataList
_CBUUIDLocalTimeInformationCharacteristicString
_CBUUIDManufacturerNameStringCharacteristicString
_CBUUIDModelNumberStringCharacteristicString
_CBUUIDNewAlertCharacteristicString
_CBUUIDPeripheralPreferredConnectionParametersString
_CBUUIDPeripheralPrivacyFlagString
_CBUUIDPnPIDCharacteristicString
_CBUUIDProtocolModeCharacteristicString
_CBUUIDReconnectionAddressString
_CBUUIDReportCharacteristicString
_CBUUIDReportMapCharacteristicString
_CBUUIDReportReferenceDescriptorString
_CBUUIDSerialNumberStringCharacteristicString
_CBUUIDServerCharacteristicConfigurationString
_CBUUIDServiceChangedString
_CBUUIDSoftwareRevisionStringCharacteristicString
_CBUUIDSupportedNewAlertCategoryCharacteristicString
_CBUUIDSupportedUnreadAlertCategoryCharacteristicString
_CBUUIDSystemIDCharacteristicString
_CBUUIDUnreadAlertStatusCharacteristicString
_OBJC_CLASS_$_CBATTRequest
_OBJC_CLASS_$_CBCentral
_OBJC_CLASS_$_CBCentralManager
_OBJC_CLASS_$_CBCharacteristic
_OBJC_CLASS_$_CBDescriptor
_OBJC_CLASS_$_CBMutableCharacteristic
_OBJC_CLASS_$_CBMutableDescriptor
_OBJC_CLASS_$_CBMutableService
_OBJC_CLASS_$_CBPeripheral
_OBJC_CLASS_$_CBPeripheralManager
_OBJC_CLASS_$_CBService
_OBJC_CLASS_$_CBUUID
_OBJC_CLASS_$_CBXpcConnection
_OBJC_IVAR_$_CBCharacteristic._UUID
_OBJC_IVAR_$_CBCharacteristic._descriptors
_OBJC_IVAR_$_CBCharacteristic._handle
_OBJC_IVAR_$_CBCharacteristic._isBroadcasted
_OBJC_IVAR_$_CBCharacteristic._isNotifying
_OBJC_IVAR_$_CBCharacteristic._peripheral
_OBJC_IVAR_$_CBCharacteristic._properties
_OBJC_IVAR_$_CBCharacteristic._service
_OBJC_IVAR_$_CBCharacteristic._value
_OBJC_IVAR_$_CBCharacteristic._valueHandle
_OBJC_IVAR_$_CBDescriptor._UUID
_OBJC_IVAR_$_CBDescriptor._characteristic
_OBJC_IVAR_$_CBDescriptor._handle
_OBJC_IVAR_$_CBDescriptor._peripheral
_OBJC_IVAR_$_CBDescriptor._value
_OBJC_IVAR_$_CBService._UUID
_OBJC_IVAR_$_CBService._characteristics
_OBJC_IVAR_$_CBService._endHandle
_OBJC_IVAR_$_CBService._includedServices
_OBJC_IVAR_$_CBService._isPrimary
_OBJC_IVAR_$_CBService._peripheral
_OBJC_IVAR_$_CBService._startHandle
_OBJC_IVAR_$_CBXpcConnection._delegate
_OBJC_IVAR_$_CBXpcConnection._delegateLock
_OBJC_IVAR_$_CBXpcConnection._options
_OBJC_IVAR_$_CBXpcConnection._queue
_OBJC_IVAR_$_CBXpcConnection._type
_OBJC_IVAR_$_CBXpcConnection._xpcConnection
_OBJC_IVAR_$_CBXpcConnection._xpcSendBarrier
_OBJC_METACLASS_$_CBATTRequest
_OBJC_METACLASS_$_CBCentral
_OBJC_METACLASS_$_CBCentralManager
_OBJC_METACLASS_$_CBCharacteristic
_OBJC_METACLASS_$_CBDescriptor
_OBJC_METACLASS_$_CBMutableCharacteristic
_OBJC_METACLASS_$_CBMutableDescriptor
_OBJC_METACLASS_$_CBMutableService
_OBJC_METACLASS_$_CBPeripheral
_OBJC_METACLASS_$_CBPeripheralManager
_OBJC_METACLASS_$_CBService
_OBJC_METACLASS_$_CBUUID
_OBJC_METACLASS_$_CBXpcConnection
_CFRelease
_CFUUIDCreateFromString
_CFUUIDGetUUIDBytes
_NSClassFromString
_NSLocalizedDescriptionKey
_NSStringFromClass
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSLock
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSRecursiveLock
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSUUID
_OBJC_METACLASS_$_NSObject
__Block_object_assign
__Block_object_dispose
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__objc_empty_cache
__xpc_error_connection_interrupted
__xpc_error_connection_invalid
__xpc_error_key_description
__xpc_type_array
__xpc_type_bool
__xpc_type_data
__xpc_type_dictionary
__xpc_type_error
__xpc_type_int64
__xpc_type_string
__xpc_type_uuid
_dispatch_async
_dispatch_get_global_queue
_dispatch_retain
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_getprogname
_kCFAllocatorDefault
_objc_assign_ivar
_objc_assign_strongCast
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_enumerationMutation
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_setProperty
_objc_sync_enter
_objc_sync_exit
_xpc_array_apply
_xpc_array_create
_xpc_array_get_count
_xpc_bool_get_value
_xpc_connection_create_mach_service
_xpc_connection_resume
_xpc_connection_send_barrier
_xpc_connection_send_message
_xpc_connection_send_message_with_reply_sync
_xpc_connection_set_event_handler
_xpc_data_create
_xpc_data_get_bytes_ptr
_xpc_data_get_length
_xpc_dictionary_apply
_xpc_dictionary_create
_xpc_dictionary_get_count
_xpc_dictionary_get_int64
_xpc_dictionary_get_string
_xpc_dictionary_get_value
_xpc_get_type
_xpc_int64_create
_xpc_int64_get_value
_xpc_release
_xpc_string_create
_xpc_string_get_string_ptr
_xpc_uuid_create
_xpc_uuid_get_bytes
dyld_stub_binder
