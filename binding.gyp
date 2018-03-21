{
    "targets": [
        {
            "sources": [
                "helloworld.cc"
            ],
            "target_name": "helloworld"
        },
        {
            "copies": [
                {
                    "destination": "<(module_path)",
                    "files": [
                        "<(PRODUCT_DIR)/<(module_name).node"
                    ]
                }
            ],
            "dependencies": [
                "<(module_name)"
            ],
            "target_name": "action_after_build",
            "type": "none"
        }
    ]
}
