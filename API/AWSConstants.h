//
//  AWSConstants.h
//  Elastics
//
//  Created by Dmitri Goutnik on 29/11/2010.
//  Copyright 2010 Tundra Bot. All rights reserved.
//

// AWS domain
extern NSString *const kAWSDomain;

// Regions
extern NSString *const kAWSUSEastRegion;
extern NSString *const kAWSUSWestNorthCaliforniaRegion;
extern NSString *const kAWSUSWestOregonRegion;
extern NSString *const kAWSEURegion;
extern NSString *const kAWSAsiaPacificSingaporeRegion;
extern NSString *const kAWSAsiaPacificJapanRegion;
extern NSString *const kAWSSouthAmericaSaoPauloRegion;
extern NSString *const kAWSUSGovCloudRegion;

// Region titles
extern NSString *const kAWSUSEastRegionTitle;
extern NSString *const kAWSUSWestNorthCaliforniaRegionTitle;
extern NSString *const kAWSUSWestOregonRegionTitle;
extern NSString *const kAWSEURegionTitle;
extern NSString *const kAWSAsiaPacificSingaporeRegionTitle;
extern NSString *const kAWSAsiaPacificJapanRegionTitle;
extern NSString *const kAWSSouthAmericaSaoPauloRegionTitle;
extern NSString *const kAWSUSGovCloudRegionTitle;

// Services
extern NSString *const kAWSEC2Service;
extern NSString *const kAWSMonitoringService;

// Parameters
extern NSString *const kAWSInstanceIdParameter;
extern NSString *const kAWSMetricNameParameter;
extern NSString *const kAWSStatisticsParameter;
extern NSString *const kAWSNamespaceParameter;
extern NSString *const kAWSStartTimeParameter;
extern NSString *const kAWSEndTimeParameter;
extern NSString *const kAWSPeriodParameter;

// Metrics
extern NSString *const kAWSCPUUtilizationMetric;
extern NSString *const kAWSDiskReadBytesMetric;
extern NSString *const kAWSDiskReadOpsMetric;
extern NSString *const kAWSDiskWriteBytesMetric;
extern NSString *const kAWSDiskWriteOpsMetric;
extern NSString *const kAWSNetworkInMetric;
extern NSString *const kAWSNetworkOutMetric;

// Supported metric statistics ranges
#define kAWSLastHourRange		3600U
#define kAWSLast3HoursRange		10800U
#define kAWSLast6HoursRange		21600U
#define kAWSLast12HoursRange	43200U
#define kAWSLast24HoursRange	86400U

// Errors
extern NSString *const kAWSErrorDomain;
