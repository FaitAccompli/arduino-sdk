#pragma once

const char addDataAbiJson[] = R"([
    {
        "anonymous": false,
        "inputs": [
            {
                "indexed": false,
                "internalType": "string",
                "name": "imei",
                "type": "string"
            },
            {
                "indexed": false,
                "internalType": "address",
                "name": "operator",
                "type": "address"
            },
            {
                "indexed": false,
                "internalType": "bytes",
                "name": "data",
                "type": "bytes"
            },
            {
                "indexed": false,
                "internalType": "bytes",
                "name": "signature",
                "type": "bytes"
            }
        ],
        "name": "Data",
        "type": "event"
    },
    {
        "inputs": [
            {
                "internalType": "string",
                "name": "imei",
                "type": "string"
            },
            {
                "internalType": "bytes",
                "name": "data",
                "type": "bytes"
            },
            {
                "internalType": "bytes",
                "name": "signature",
                "type": "bytes"
            }
        ],
        "name": "addData",
        "outputs": [],
        "stateMutability": "nonpayable",
        "type": "function"
    }
])";